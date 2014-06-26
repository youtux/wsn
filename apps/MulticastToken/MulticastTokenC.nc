#include "MulticastToken.h"
#include "functions.c"

#include <AM.h>

#define SLEEP_BEFORE_SENDING_UPDATES 1000


#ifdef TOSSIM
  #define ulog(streamID, format, ...)  dbg(streamID, "%s: " format "\n", sim_time_string(), ##__VA_ARGS__)
#else
  #define ulog(streamID, format, ...)
#endif

module MulticastTokenC {
  uses{
    interface Boot;

    interface Random;

    interface Timer<TMilli> as TimeoutUpdateColors;
    interface Timer<TMilli> as SleepBeforeSendingUpdates;
    interface Timer<TMilli> as SendTimer;

    interface Queue<message_t *> as ForwardQueue;
    interface Pool<message_t> as ForwardPool;

    interface SplitControl as RadioControl;
    interface StdControl as RoutingControl;
    interface RootControl;
    interface Send as CtpSend;
    interface Receive as CtpReceive;
    interface Intercept as CtpIntercept;
    interface CtpPacket;

    //interface Packet;
    //interface AMPacket;

    interface AMSend as AMSend;
    interface Receive as AMReceive;

  }
}

implementation {
  message_t mtPacket;
  uint8_t rebuildSeqno = 0;
  uint8_t dataSeqno = 0;

  bool sending = FALSE;

  mt_data_t dataToSend = 0;

  // Current node enabled colors
  color_t node_colors = 0;

  // Colors of the children
  color_t children_colors = 0;

  task void sendData();
  task void broadcastRebuildTree();
  task void updateColors();

  task void flushForwardQueue();

  bool isAnycast(nx_mt_msg_t* payload){
    return payload->flags & MT_FLAGS_ANYCAST;
  }

  bool isRebuild(nx_mt_msg_t* payload){
    return payload->flags & MT_FLAGS_REBUILD;
  }

  bool isUpdate(nx_mt_msg_t* payload){
    return payload->flags & MT_FLAGS_UPDATE;
  }

  bool isData(nx_mt_msg_t* payload){
    return payload->flags & MT_FLAGS_DATA;
  }

  bool isForMe(nx_mt_msg_t* payload){
    return payload->color & node_colors;
  }

  bool isForMyChildren(nx_mt_msg_t* payload){
    return payload->color & children_colors;
  }

  void handleReceivedData(mt_data_t data){
    dbg_clear("MulticastTokenStatistics", "%s : %u : receive [ data = %u ]\n", sim_time_string(), TOS_NODE_ID, data);
    ulog("MulticastToken", "--- HANDLED %d ---", data);
  }

  void setColor(){

    /*
    // project-topology.out
    switch (TOS_NODE_ID){
    case 0:
      node_colors = MT_RED;
      break;
    case 1:
      node_colors = MT_YELLOW;
      break;
    case 2:
      node_colors = MT_GREEN;
      break;
    case 3:
      node_colors = MT_BLUE;
      break;
    case 4:
      node_colors = MT_RED;
      break;
    case 5:
      node_colors = MT_BLUE;
      break;
    case 6:
      node_colors = MT_GREEN;
      break;
    case 7:
      node_colors = MT_GREEN;
      break;
    case 8:
      node_colors = MT_YELLOW;
      break;
    case 9:
      node_colors = MT_RED;
      break;
    case 10:
      node_colors = MT_RED;
      break;
    case 11:
      node_colors = MT_YELLOW;
      break;
    case 12:
      node_colors = MT_YELLOW;
      break;
    default:
      ulog("MulticastToken", "FATAL ERROR: I don't know what color to set");
    }*/

    // topology1.out
    switch (TOS_NODE_ID){
    case 0:
      node_colors = 0;
      break;
    case 1:
      node_colors = MT_RED;
      break;
    case 2:
      node_colors = MT_BLACK;
      break;
    case 3:
    case 4:
    case 5:
      node_colors = MT_WHITE;
      break;
    case 6:
    case 7:
      node_colors = MT_BLACK;
      break;
    default:
      ulog("MulticastToken", "FATAL ERROR: I don't know what color to set");
    }

    dbg_clear("MulticastTokenStatistics", "%s : %u : status [ color = %u ]\n", sim_time_string(), TOS_NODE_ID, node_colors);
  }

  event void Boot.booted() {
    setColor();

    ulog("MulticastToken", "Colors enabled: %8s", btoa(node_colors));

    call RadioControl.start();
  }

  event void RadioControl.startDone(error_t error) {
    if (error != SUCCESS)
      call RadioControl.start();
    else {
      // If I'm the root, immediately flood the REBUILD message
      if (TOS_NODE_ID == 0){
        call RootControl.setRoot();

        // Random sequence number for the REBUILD message
        rebuildSeqno = (uint8_t) call Random.rand16();
        post broadcastRebuildTree();

        call TimeoutUpdateColors.startPeriodic(MT_PERIOD);
      }else
        call SendTimer.startPeriodic(11 * 1024);

      call RoutingControl.start();
    }
  }

  event void TimeoutUpdateColors.fired() {
    ulog("MulticastToken", "Time to rebuild the MT tree...");
    rebuildSeqno = (uint8_t) call Random.rand16();
    post broadcastRebuildTree();
  }

  event void SendTimer.fired() {
    dataToSend = call Random.rand32();
    if (TOS_NODE_ID == 7)
      post sendData();
  }

  task void sendData() {
    nx_mt_msg_t *payload;
    error_t sendResult;

    if (sending){
      post sendData();
      return;
    }

    payload = (nx_mt_msg_t *) call CtpSend.getPayload(&mtPacket, sizeof(nx_mt_msg_t));

    payload->flags = MT_FLAGS_DATA; // | MT_FLAGS_ANYCAST;
    payload->color = MT_WHITE;
    payload->data = dataToSend;

    dbg_clear("MulticastTokenStatistics", "%s : %u : send [ data = %u , color = %u , multicast = %d ]\n", sim_time_string(), TOS_NODE_ID, payload->data, payload->color, !isAnycast(payload));
    ulog("MulticastToken", "Sending data [color=%8s, data=%u]", btoa(payload->color), payload->data);
    sendResult = call CtpSend.send(&mtPacket, sizeof(nx_mt_msg_t));

    if (sendResult == SUCCESS)
      sending = TRUE;
    else
      post sendData();

    return;
  }

  task void broadcastRebuildTree(){
    nx_mt_msg_t *payload;
    error_t sendResult;

    if (sending){
      post broadcastRebuildTree();
      return;
    }

    payload = (nx_mt_msg_t *) call AMSend.getPayload(&mtPacket, sizeof(nx_mt_msg_t));

    payload->flags = MT_FLAGS_REBUILD;
    payload->seqno = rebuildSeqno;

    ulog("MulticastToken", "Broadcasting rebuildTree [seqno=%d]", payload->seqno);
    sendResult = call AMSend.send(AM_BROADCAST_ADDR, &mtPacket, sizeof(nx_mt_msg_t));

    if (sendResult == SUCCESS)
      sending = TRUE;
    else
      post broadcastRebuildTree();
    
  }

  task void updateColors(){
    nx_mt_msg_t *payload;
    error_t sendResult;

    if (sending){
      post updateColors();
      return;
    }

    payload = (nx_mt_msg_t *) call CtpSend.getPayload(&mtPacket, sizeof(nx_mt_msg_t));

    payload->flags = MT_FLAGS_UPDATE;
    payload->color = node_colors | children_colors;

    ulog("MulticastToken", "Sending update [colors=%8s]", btoa(payload->color));
    sendResult = call CtpSend.send(&mtPacket, sizeof(nx_mt_msg_t));

    if (sendResult == SUCCESS)
      sending = TRUE;
    else
      post updateColors();

    return;
  }

  task void flushForwardQueue(){
    error_t sendResult;
    message_t *msg;

    if (sending || call ForwardQueue.empty())
      return;

    // Get the first message. Do not remove it from the queue!
    // Remove it only when returning from the sendDone
    msg = call ForwardQueue.head();

    sendResult = call AMSend.send(AM_BROADCAST_ADDR, msg, sizeof(nx_mt_msg_t));
    if (sendResult == SUCCESS)
      sending = TRUE;
    else
      post flushForwardQueue();
    
  }

  event void AMSend.sendDone(message_t* msg, error_t error){
    nx_mt_msg_t *payload;
    sending = FALSE;

    payload = call AMSend.getPayload(msg, sizeof(nx_mt_msg_t));

    if (error == SUCCESS){
      if ( TOS_NODE_ID != 0 && isRebuild(payload) ){
        // Correctly sent the REBUILD message. Now sleep before updating colors
        call SleepBeforeSendingUpdates.startOneShot(SLEEP_BEFORE_SENDING_UPDATES);
      }else if (isData(payload)){
        // Correctlu sent the DATA message. Now remove it from the pool and the queue
        if (msg != call ForwardQueue.head()){
          ulog("MulticastToken", "FATAL ERROR: expected Queue.head() and msg to be the same");
          return;
        }
        call ForwardPool.put(call ForwardQueue.dequeue());

        // Flush the queue again
        post flushForwardQueue();
      }
    }else{
      ulog("MulticastToken", "ERROR: sendDone returned %d", error);
    }
  }

  event void SleepBeforeSendingUpdates.fired(){
    post updateColors();
  }

  event void CtpSend.sendDone(message_t* msg, error_t error) {
    sending = FALSE;

    if (error != SUCCESS){
      ulog("MulticastToken", "ERROR from the CtpSend.sendDone %d", error);
    }
  }

  message_t* receiveDelegate(message_t* msg, void* payload, uint8_t len){
    message_t *newmsg;
    nx_mt_msg_t *out;
    nx_mt_msg_t *p = (nx_mt_msg_t *) payload;

    // Case of REBUILD message
    if (isRebuild(p)){
      // Drop duplicate
      if (p->seqno == rebuildSeqno)
        return msg;

      // Update sequence number for the rebuild stage
      rebuildSeqno = p->seqno;

      // Reset data seqno
      dataSeqno = 0;

      // Reset children colors
      children_colors = 0;
      
      //TODO: wait random time
      post broadcastRebuildTree();
    }else if (isUpdate(p)){ // Case of UPDATE message
      // Update the children colors
      children_colors |= p->color;

      ulog("MulticastToken", "Received update [p->colors=%8s]", btoa(p->color));
      ulog("MulticastToken", "    children_colors=%8s", btoa(children_colors));
    }else if (isData(p)){
      // Data Message

      if (TOS_NODE_ID == 0)
        dataSeqno++;
      else{
        if (p->seqno <= dataSeqno)
          return msg;
        dataSeqno = p->seqno;
      }
      // I must forward the packet if my children belong to it and if either:
      // 1)the packet is MULTICAST 
      // 2)the packet ANYCAST & I don't belong to it
      // Otherwise put it in the queue and send it
      if ( isForMyChildren(p) && (
          !isAnycast(p) || (isAnycast(p) && !isForMe(p))
          ) ){
        // Get a fresh memory location for the new packet to send
        newmsg = call ForwardPool.get();
        if (newmsg == NULL){
          return msg;
        }

        // Copy the received payload inside the new packet payload
        out = (nx_mt_msg_t *) call AMSend.getPayload(newmsg, sizeof(nx_mt_msg_t));
        if (out == NULL){
          call ForwardPool.put(newmsg);
          return msg;
        }
        memcpy(out, p, sizeof(nx_mt_msg_t));

        out->seqno = dataSeqno;

        if (call ForwardQueue.enqueue(newmsg) != SUCCESS){
          call ForwardPool.put(newmsg);
          return msg;
        }
        post flushForwardQueue();
      }
      // If the message is for me
      if (isForMe(p)){
        handleReceivedData(p->data);
      }

    }
    return msg;
  }

  event message_t* AMReceive.receive(message_t* msg, void* payload, uint8_t len){
    nx_mt_msg_t *p = (nx_mt_msg_t *) payload;
    //ulog("MulticastToken", "Received message!");

    if (isUpdate(p)){
      ulog("MulticastToken", "FATAL ERROR: received MT_FLAGS_UPDATE from AMReceive!");
      return msg;
    }
    
    // Check if I've already seen it
    if ( isData(p) && p->seqno <= dataSeqno )
      return msg;
    
    return receiveDelegate(msg, payload, len);
  }

  event message_t* CtpReceive.receive(message_t* msg, void* payload, uint8_t len) {
    nx_mt_msg_t *p = (nx_mt_msg_t *) payload;

    if (isRebuild(p)){
      // This should never happen
      ulog("MulticastToken", "FATAL ERROR: received MT_FLAGS_REBUILD from CtpReceive!");
      return msg;
    }

    return receiveDelegate(msg, payload, len);
  }

  event bool CtpIntercept.forward(message_t* msg, void* payload, uint8_t len){
    nx_mt_msg_t* p = (nx_mt_msg_t *) payload;
    bool needToForward;

    if (isUpdate(p)){
      ulog("MulticastToken", "Intercepted message [colors=%8s]", btoa(p->color));

      // needToForward will be true if the p->node_colors is included in the already sent colors (i.e. children_colors | node_colors)
      needToForward = ((p->color | children_colors | node_colors) != (children_colors | node_colors));

      // update the children colors adding the received ones
      children_colors |= (p->color);

      ulog("MulticastToken", "End of intercept. Colors: [children=%8s], forward=%d", btoa(children_colors), needToForward);

      return needToForward;
    }else if (isRebuild(p)){
      // This should never happen
      ulog("MulticastToken", "FATAL ERROR: received MT_FLAGS_REBUILD from CtpForward!");
      return FALSE;
    }else{
      // Data Message

      // If the message is for me and I can stop it
      if (isForMe(p) && isAnycast(p)){
        handleReceivedData(p->data);
        // If the message is anycast, then stop it: I have already received it.
        return FALSE;
      }
      return TRUE;
    }
    return FALSE;
  }

  event void RadioControl.stopDone(error_t error) {}

}