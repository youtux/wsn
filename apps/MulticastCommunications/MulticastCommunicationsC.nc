#include "MulticastCommunications.h"
#include "functions.c"

#include <AM.h>

// Time to wait between the receiving of a REBUILD message
// and the send of the UPDATE message
#define SLEEP_BEFORE_SENDING_UPDATES 256

// Time to wait before assuming that a node has lost a REBUILD phase
#define TIMEOUT_LOST_REBUILD_PHASE 2 * 1024

// Period of the application data sending
#define APP_PERIOD_SEND 8 * 1024

// Used to choose the right topology
#define PROJECT_TOPOLOGY
// #define TOPOLOGY1

// Some useful debug shortcut
#ifdef TOSSIM
  #define ulog(streamID, format, ...)  dbg(streamID, "%s: " format "\n", sim_time_string(), ##__VA_ARGS__)
#else
  #define ulog(streamID, format, ...)
#endif

module MulticastCommunicationsC {
  uses{
    interface Boot;

    interface Random;

    interface Timer<TMilli> as ResetTreePeriod;
    interface Timer<TMilli> as TxTimer;
    interface Timer<TMilli> as SendTimer;
    interface Timer<TMilli> as TimeoutLostResetTree;

    interface Queue<message_t *> as ForwardQueue;
    interface Pool<message_t> as ForwardPool;

    interface SplitControl as RadioControl;

    interface StdControl as CtpRoutingControl;
    interface RootControl as CtpRootControl;
    interface Receive as CtpReceive;
    interface Intercept as CtpIntercept;

    interface Send as CtpSend;
    
    interface AMSend;
    interface Receive as AMReceive;

  }
}

implementation {
  message_t mcPacket;

  // Sequence number for the REBUILD messages
  // This will be a random number generated by the sink
  uint16_t rebuildSeqno;

  // Sequence number for DATA messages
  // This will be an incrementing number (initialized by the sink)
  uint16_t dataSeqno;

  // We don't want to send if we are already sending
  bool sending = FALSE;

  // Current node colors
  mc_color_t node_colors = 0;

  // Colors of the children
  mc_color_t children_colors = 0;

  // txtimer status domain
  enum {
    MC_TXTIMER_STATUS_NULL,
    MC_TXTIMER_STATUS_UPDATE,
    MC_TXTIMER_STATUS_REBUILD,
    MC_TXTIMER_STATUS_DATA
  };

  // Since we have one timer, for the transimssion delay,
  // we must remember why it was shot
  uint8_t txtimer_status = MC_TXTIMER_STATUS_NULL;

  // Task that will be periodically called when DATA must
  // be transmitted
  task void sendData();

  // This task will be periodically called on the sink
  // It will broadcast the REBUILD tree message
  task void broadcastRebuildTree();

  // This task will send the colors of the node to sink, using CTP
  task void updateColors();

  // This task will flush the DATA message queue, until it's empty
  task void flushForwardQueue();

  // Some convenience functions
  bool isRebuild(nx_mc_msg_t* payload){
    return payload->flags & MC_FLAGS_REBUILD;
  }

  bool isUpdate(nx_mc_msg_t* payload){
    return payload->flags & MC_FLAGS_UPDATE;
  }

  bool isData(nx_mc_msg_t* payload){
    return payload->flags & MC_FLAGS_DATA;
  }

  bool isAnycast(nx_mc_msg_t* payload){
    return payload->flags & MC_FLAGS_ANYCAST;
  }

  bool isForMe(nx_mc_msg_t* payload){
    return payload->color & node_colors;
  }

  bool isForMyChildren(nx_mc_msg_t* payload){
    return payload->color & children_colors;
  }

  void handleReceivedData(mc_data_t data){
    dbg_clear("MulticastCommunicationsStatistics", "%s : %u : receive [ data = %u ]\n", sim_time_string(), TOS_NODE_ID, data);
    ulog("MulticastCommunications", "--- HANDLED %d ---", data);
  }

  void setColor(){
#ifdef PROJECT_TOPOLOGY
    // project-topology.out
    switch (TOS_NODE_ID){
    case 0:
      node_colors = MC_RED;
      break;
    case 1:
      node_colors = MC_YELLOW;
      break;
    case 2:
      node_colors = MC_GREEN;
      break;
    case 3:
      node_colors = MC_BLUE;
      break;
    case 4:
      node_colors = MC_RED;
      break;
    case 5:
      node_colors = MC_BLUE;
      break;
    case 6:
      node_colors = MC_GREEN;
      break;
    case 7:
      node_colors = MC_GREEN;
      break;
    case 8:
      node_colors = MC_YELLOW;
      break;
    case 9:
      node_colors = MC_RED;
      break;
    case 10:
      node_colors = MC_RED;
      break;
    case 11:
      node_colors = MC_YELLOW;
      break;
    case 12:
      node_colors = MC_YELLOW;
      break;
    default:
      ulog("MulticastCommunications", "FATAL ERROR: I don't know what color to set");
    }
#elif TOPOLOGY1
    // topology1.out
    switch (TOS_NODE_ID){
    case 0:
      node_colors = 0;
      break;
    case 1:
      node_colors = MC_RED;
      break;
    case 2:
      node_colors = MC_BLACK;
      break;
    case 3:
    case 4:
    case 5:
      node_colors = MC_WHITE;
      break;
    case 6:
    case 7:
      node_colors = MC_BLACK;
      break;
    default:
      ulog("MulticastCommunications", "FATAL ERROR: I don't know what color to set");
    }
#endif

    dbg_clear("MulticastCommunicationsStatistics", "%s : %u : status [ color = %u ]\n", sim_time_string(), TOS_NODE_ID, node_colors);
    ulog("MulticastCommunications", "Colors enabled: %8s", btoa(node_colors));
  }

  event void Boot.booted() {
    // Set the color for the node
    setColor();

    // Initialize the first rebuildSeqno for the REBUILD message
    rebuildSeqno = (uint16_t) call Random.rand16();
    // Initialize the dataSeqno for the DATA messages
    dataSeqno = 0;

    // Start the radio
    call RadioControl.start();
  }

  event void RadioControl.startDone(error_t error) {
    if (error != SUCCESS)
      call RadioControl.start();
    else {
      // Start the CTP framework
      call CtpRoutingControl.start();

      // Start the periodic timer for the UPDATE phase
      call ResetTreePeriod.startPeriodic(MC_UPDATE_PERIOD);

      // If I'm the root
      if (TOS_NODE_ID == 0)
        call CtpRootControl.setRoot();
      else{
        // If I'm a normal node, send the UPDATE message
        post updateColors();

        // and start the periodic data send timer
        call SendTimer.startPeriodic(APP_PERIOD_SEND);
      }
    }
  }

  // Fired when it's time to update the tree
  event void ResetTreePeriod.fired() {
    if (TOS_NODE_ID == 0){
      ulog("MulticastCommunications", "Time to rebuild the MT tree...");

      // Generate a new random seqno for the REBUILD
      rebuildSeqno = (uint16_t) call Random.rand16();
      post broadcastRebuildTree();
    }else{
      // I'm a normal node, setup a timeout for the receiving of the
      // REBUILD message
      call TimeoutLostResetTree.startOneShot(TIMEOUT_LOST_REBUILD_PHASE);
    }
  }

  //
  event void TimeoutLostResetTree.fired() {
    ulog("MulticastCommunications", "Lost a REBUILD phase...");
    // Timeout expired, I can assume I've lost a REBUILD phase,
    // so I'll send my colors anyway

    // Reset the list of children colors
    children_colors = 0;
    // Reset data sequence number
    dataSeqno = 0;

    post updateColors();
  }

  // Fired when it's time to send some data
  event void SendTimer.fired() {
    // For our test purposes, let be the node 7 the only one that sends data
    if (TOS_NODE_ID == 8)
      post sendData();
  }

  // Fired when the delay before sending a packet has expired
  event void TxTimer.fired(){
    // Check what we need to send
    switch (txtimer_status){
    case MC_TXTIMER_STATUS_UPDATE:
      txtimer_status = MC_TXTIMER_STATUS_NULL;
      post updateColors();
      break;
    case MC_TXTIMER_STATUS_REBUILD:
      txtimer_status = MC_TXTIMER_STATUS_NULL;
      post broadcastRebuildTree();
      break;
    case MC_TXTIMER_STATUS_DATA:
      txtimer_status = MC_TXTIMER_STATUS_NULL;
      post flushForwardQueue();
      break;
    default:
      ulog("MulticastCommunications", "FATAL ERROR: txtimer_status unknown: %d", txtimer_status);
    }
  }

  // Generate some random data and send it
  task void sendData() {
    nx_mc_msg_t *payload;
    error_t sendResult;

    if (sending){
      post sendData(); // Retry
      return;
    }

    // I'm a normal node, I will send my DATA message to the sink,
    // which will start rebroadcasting it
    payload = (nx_mc_msg_t *) call CtpSend.getPayload(&mcPacket, sizeof(nx_mc_msg_t));

    // This is a data message
    payload->flags = MC_FLAGS_DATA;

    // Choose if it's multicast or anycast randomly
    if (call Random.rand16() % 2)
      payload->flags |= MC_FLAGS_ANYCAST;

    // Choose the destination color randomly
    payload->color = 1 << (call Random.rand16() % 8);

    payload->data = call Random.rand32();;

    dbg_clear("MulticastCommunicationsStatistics", "%s : %u : send [ data = %u , color = %u , multicast = %d ]\n", sim_time_string(), TOS_NODE_ID, payload->data, payload->color, !isAnycast(payload));
    ulog("MulticastCommunications", "Sending data [color=%8s, data=%u]", btoa(payload->color), payload->data);

    sendResult = call CtpSend.send(&mcPacket, sizeof(nx_mc_msg_t));
    if (sendResult == SUCCESS)
      sending = TRUE;
    else
      post sendData();

    return;
  }

  task void broadcastRebuildTree(){
    nx_mc_msg_t *payload;
    error_t sendResult;

    if (sending){
      post broadcastRebuildTree();
      return;
    }

    payload = (nx_mc_msg_t *) call AMSend.getPayload(&mcPacket, sizeof(nx_mc_msg_t));

    payload->flags = MC_FLAGS_REBUILD;
    payload->seqno = rebuildSeqno;

    ulog("MulticastCommunications", "Broadcasting rebuildTree [seqno=%d]", payload->seqno);
    sendResult = call AMSend.send(AM_BROADCAST_ADDR, &mcPacket, sizeof(nx_mc_msg_t));

    if (sendResult == SUCCESS)
      sending = TRUE;
    else
      post broadcastRebuildTree();
    
  }

  task void updateColors(){
    nx_mc_msg_t *payload;
    error_t sendResult;

    if (sending){
      post updateColors();
      return;
    }

    payload = (nx_mc_msg_t *) call CtpSend.getPayload(&mcPacket, sizeof(nx_mc_msg_t));

    payload->flags = MC_FLAGS_UPDATE;

    // Put in the packet my colors and the colors of my children
    payload->color = node_colors | children_colors;

    ulog("MulticastCommunications", "Sending update [colors=%8s]", btoa(payload->color));

    sendResult = call CtpSend.send(&mcPacket, sizeof(nx_mc_msg_t));
    if (sendResult == SUCCESS)
      sending = TRUE;
    else
      post updateColors();

    return;
  }

  task void flushForwardQueue(){
    error_t sendResult;
    message_t *msg;

    if (sending)
      post flushForwardQueue();

    // Check whether the queue is empty
    if (call ForwardQueue.empty())
      return;

    // Get the first message. Do not remove it from the queue!
    // Remove it only when returning from the sendDone
    msg = call ForwardQueue.head();

    // Broadcast the message
    sendResult = call AMSend.send(AM_BROADCAST_ADDR, msg, sizeof(nx_mc_msg_t));
    if (sendResult == SUCCESS)
      sending = TRUE;
    else
      post flushForwardQueue();
    
  }

  event void AMSend.sendDone(message_t* msg, error_t error){
    nx_mc_msg_t *payload;

    sending = FALSE;

    payload = call AMSend.getPayload(msg, sizeof(nx_mc_msg_t));

    if (error == SUCCESS){
      // If the message was a REBUILD message and I'm not the root
      if (isRebuild(payload) && TOS_NODE_ID != 0){
        // Sleep before updating colors
        txtimer_status = MC_TXTIMER_STATUS_UPDATE;
        call TxTimer.startOneShot(SLEEP_BEFORE_SENDING_UPDATES);
      }else if (isData(payload)){
        // Correctly sent the DATA message.
        
        // Some sanity check
        if (msg != call ForwardQueue.head()){
          ulog("MulticastCommunications", "FATAL ERROR: expected Queue.head() and msg to be the same");
          return;
        }

        // Now remove the packet from the queue and release it from the pool
        call ForwardQueue.dequeue();
        call ForwardPool.put(msg);

        // Flush the queue again
        post flushForwardQueue();
      }
    }else{
      ulog("MulticastCommunications", "ERROR: sendDone returned %d", error);
    }
  }

  event void CtpSend.sendDone(message_t* msg, error_t error) {
    sending = FALSE;

    if (error != SUCCESS){
      ulog("MulticastCommunications", "ERROR from the CtpSend.sendDone %d", error);
    }
  }

  // This function will choose the appropriate action when a packet arrives
  // Assume that sanity checks are already done
  message_t* receiveDelegate(message_t* msg, void* payload, uint8_t len){
    nx_mc_msg_t *p = (nx_mc_msg_t *) payload;
    if (isRebuild(p)){
      // REBUILD message:
      // Check if it's not a duplicate, rebroadcast the REBUILD message
      // and send colors through the tree (UPDATE)
      uint8_t backoff;

      // Drop if it's a duplicate
      if (p->seqno == rebuildSeqno)
        return msg;

      // Drop if I'm the root (just to be sure)
      if (TOS_NODE_ID == 0)
        return msg;

      ulog("MulticastCommunications", "Handling REBUILD message [seqno=%d]", p->seqno);

      // Received REBUILD message
      //  -> Sync the ResetTreePeriod
      call ResetTreePeriod.startPeriodic(MC_UPDATE_PERIOD);
      //  -> cancel the timeout
      call TimeoutLostResetTree.stop();

      // Save this sequence number
      rebuildSeqno = p->seqno;

      // Reset data sequence number
      dataSeqno = 0;

      // Reset children colors
      children_colors = 0;
      
      // Wait a random time between [0, 15] ms
      // before rebroadcasting the REBUILD
      backoff = (uint8_t) call Random.rand16() % 16;
      txtimer_status = MC_TXTIMER_STATUS_REBUILD;
      call TxTimer.startOneShot(backoff);
    }else if (isUpdate(p)){
      // UPDATE message:
      // This can only arrive from my children.
      // Just need to update the list of my children colors

      // Add the received colors
      children_colors |= p->color;

      ulog("MulticastCommunications", "Received update [p->colors=%8s]", btoa(p->color));
      ulog("MulticastCommunications", "    children_colors=%8s", btoa(children_colors));
    }else if (isData(p)){
      // DATA message:

      // If I'm the root, I'll increment the data sequence number and
      // send if any of my children have the right color.

      // If I'm a normal node, rebroadcast the message if any of my
      // children have the right color

      // Assume sequence control already done

      // At the end, handle the received data.

      ulog("MulticastCommunications", "Received valid DATA message [data=%d, color=%s]", p->data, btoa(p->color));
      ulog("MulticastCommunications", "Status: children_colors=%s", btoa(children_colors));

      if (TOS_NODE_ID == 0){
        // I'm the root -> increment sequence number
        dataSeqno++;
      } else {
        // I'm a normal node -> take the new sequence number
        dataSeqno = p->seqno;
      }

      // I must forward the packet if my children's colors belong to it
      // and if either:
      // a) the packet is MULTICAST 
      // b) the packet ANYCAST & it's not for me
      if ( isForMyChildren(p) && (
          !isAnycast(p) || (isAnycast(p) && !isForMe(p))
          ) ){
        uint8_t backoff;
        message_t *new_msg;
        nx_mc_msg_t *new_payload;

        // Get a fresh memory location for the new packet to send
        new_msg = call ForwardPool.get();
        if (new_msg == NULL){
          return msg;
        }

        // Get the new packet payload location
        new_payload = (nx_mc_msg_t *) call AMSend.getPayload(new_msg, sizeof(nx_mc_msg_t));
        if (new_payload == NULL){
          call ForwardPool.put(new_msg);
          return msg;
        }

        // Copy the received payload inside the new packet payload
        memcpy(new_payload, payload, sizeof(nx_mc_msg_t));

        // If I'm the sink, write the correct sequence number
        if (TOS_NODE_ID == 0)
          new_payload->seqno = dataSeqno;

        // Enqueue the new packet
        if (call ForwardQueue.enqueue(new_msg) != SUCCESS){
          call ForwardPool.put(new_msg);
          return msg;
        }

        // Wait a random time before forwarding
        backoff = (uint8_t) call Random.rand16() % 16;
        txtimer_status = MC_TXTIMER_STATUS_DATA;
        call TxTimer.startOneShot(backoff);

        ulog("MulticastCommunications", "Message [data=%d, color=%s] queued for transmission", new_payload->data, btoa(new_payload->color));
      }

      // Now I can handle the received data if the message is for me
      if (isForMe(p)){
        handleReceivedData(p->data);
      }
    }
    return msg;
  }

  // Received a packet from the radio, this must be either a REBUILD
  // or a DATA message
  event message_t* AMReceive.receive(message_t* msg, void* payload, uint8_t len){
    nx_mc_msg_t *p = (nx_mc_msg_t *) payload;

    if (isUpdate(p)){
      // This should never happen
      ulog("MulticastCommunications", "FATAL ERROR: received MC_FLAGS_UPDATE from AMReceive!");
      return msg;
    }
    
    // If it's DATA and I've already seen it -> drop it
    if (isData(p) && p->seqno <= dataSeqno)
      return msg;
    
    return receiveDelegate(msg, payload, len);
  }

  event message_t* CtpReceive.receive(message_t* msg, void* payload, uint8_t len) {
    nx_mc_msg_t *p = (nx_mc_msg_t *) payload;

    if (isRebuild(p)){
      // This should never happen
      ulog("MulticastCommunications", "FATAL ERROR: received MC_FLAGS_REBUILD from CtpReceive!");
      return msg;
    }

    // Do not check the sequence number if it's a DATA message:
    // It will have no meaning since only the root (me) will choose it

    return receiveDelegate(msg, payload, len);
  }

  // Every time I get a message from my children, check if it's an UPDATE
  // or a DATA message.
  // If it's an UPDATE, check if the message has some information that
  // must be forwarded to my parent and forward it accordingly
  event bool CtpIntercept.forward(message_t* msg, void* payload, uint8_t len){
    nx_mc_msg_t* p;
    bool needToForward = TRUE; // Default action: forward it

    p = (nx_mc_msg_t *) payload;

    if (isUpdate(p)){
      // UPDATE message
      ulog("MulticastCommunications", "Intercepted message [colors=%8s]", btoa(p->color));

      // needToForward will be true if the p->node_colors is not included in the already sent colors (i.e. children_colors | node_colors)
      needToForward = ((p->color | children_colors | node_colors) != (children_colors | node_colors));

      // Update the children color list adding the received ones
      children_colors |= (p->color);

      if (needToForward){
        // Update the packet color list
        p->color = node_colors | children_colors;
      }

      ulog("MulticastCommunications", "End of intercept. Colors: [children=%8s], forward=%d", btoa(children_colors), needToForward);

    }else if (isRebuild(p)){
      // REBUILD message
      // This should never happen
      ulog("MulticastCommunications", "FATAL ERROR: received MC_FLAGS_REBUILD from CtpForward!");
      needToForward = FALSE;
    }else if (isData(p)){
      // DATA message

      // If the message is for me and it's anycast -> stop it!
      if (isForMe(p) && isAnycast(p)){
        handleReceivedData(p->data);
        needToForward = FALSE;
      } else 
        needToForward = TRUE;
    }
    
    return needToForward;
  }

  event void RadioControl.stopDone(error_t error) {}

}