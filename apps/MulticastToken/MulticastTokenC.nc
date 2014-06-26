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

    //interface Timer<TMilli> as TimerUpdateColors;

    interface Timer<TMilli> as TimeoutUpdateColors;
    interface Timer<TMilli> as SleepBeforeSendingUpdates;

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

  /*
  message_t mtRebuildPacket;
  uint8_t rebuildSeqno;
  
  // Packet for multicast message
  message_t mtDataPacket;
  uint8_t dataSeqno;

  // Packet for multicast token dissemination
  message_t mtUpdatePacket;
  */
  // Current node enabled colors
  color_t node_colors = 0;

  // Colors of the children
  color_t children_colors = 0;

  task void broadcastRebuildTree();
  task void updateColors();

  task void flushForwardQueue();

  void handleReceivedData(mt_data_t data){
    ulog("MulticastToken", "--- HANDLED %d ---", data);
  }

  event void Boot.booted() {
    if (TOS_NODE_ID == 0)
      node_colors = MT_WHITE;
    else
      node_colors = TOS_NODE_ID % 256;

    ulog("MulticastToken", "Colors enabled: %8s", btoa(node_colors));

    call RadioControl.start();
  }

  event void RadioControl.startDone(error_t error) {
    if (error != SUCCESS)
      call RadioControl.start();
    else {
      if (TOS_NODE_ID == 0){
        call RootControl.setRoot();

        rebuildSeqno++;
        post broadcastRebuildTree();

        call TimeoutUpdateColors.startPeriodic(MT_PERIOD);
      }

      call RoutingControl.start();
    }
  }

  event void TimeoutUpdateColors.fired() {
    ulog("MulticastToken", "Time to rebuild the MT tree...");
    rebuildSeqno++;
    post broadcastRebuildTree();
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
      if ( TOS_NODE_ID != 0 && (payload->flags & MT_FLAGS_REBUILD) ){
        // Correctly sent the REBUILD message. Now sleep before updating colors
        call SleepBeforeSendingUpdates.startOneShot(SLEEP_BEFORE_SENDING_UPDATES);
      }else if (payload->flags & MT_FLAGS_DATA){
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
    if (p->flags & MT_FLAGS_REBUILD){
      // Drop duplicate
      if (p->seqno <= rebuildSeqno)
        return msg;

      // Update sequence number for the rebuild stage
      rebuildSeqno = p->seqno;

      // Reset children colors
      children_colors = 0;
      
      //TODO: wait random time
      post broadcastRebuildTree();
    }else if (p->flags & MT_FLAGS_UPDATE){ // Case of UPDATE message
      // Update the children colors
      children_colors |= p->color;

      ulog("MulticastToken", "Received update [p->colors=%8s]", btoa(p->color));
      ulog("MulticastToken", "    children_colors=%8s", btoa(children_colors));
    }else if (p->flags & MT_FLAGS_DATA){
      // Data Message

      // If the message is for me
      if (p->color & node_colors){
        
        // If the message is anycast, then stop it: I have already received it.
        // Otherwise put it in the queue and send it
        if (! (p->flags & MT_FLAGS_ANYCAST)){
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

          // Update the sequence number
          out->seqno = dataSeqno++;

          if (call ForwardQueue.enqueue(newmsg) != SUCCESS){
            call ForwardPool.put(newmsg);
            return msg;
          }
          post flushForwardQueue();
        }

        handleReceivedData(p->data);
      }

    }
    return msg;
  }

  event message_t* AMReceive.receive(message_t* msg, void* payload, uint8_t len){
    nx_mt_msg_t *p = (nx_mt_msg_t *) payload;
    //ulog("MulticastToken", "Received Rebuild [seqno=%d]", p->seqno);

    if (p->flags & MT_FLAGS_UPDATE){
      ulog("MulticastToken", "FATAL ERROR: received MT_FLAGS_UPDATE from AMReceive!");
      return msg;
    }
    return receiveDelegate(msg, payload, len);
  }

  event message_t* CtpReceive.receive(message_t* msg, void* payload, uint8_t len) {
    nx_mt_msg_t *p = (nx_mt_msg_t *) payload;

    if (p->flags & MT_FLAGS_REBUILD){
      // This should never happen
      ulog("MulticastToken", "FATAL ERROR: received MT_FLAGS_REBUILD from CtpReceive!");
      return msg;
    }
    return receiveDelegate(msg, payload, len);
  }

  event bool CtpIntercept.forward(message_t* msg, void* payload, uint8_t len){
    nx_mt_msg_t* p = (nx_mt_msg_t *) payload;
    bool needToUpdate;

    if (p->flags & MT_FLAGS_UPDATE){
      ulog("MulticastToken", "Intercepted message [colors=%8s]", btoa(p->color));

      // needToUpdate will be true if the p->node_colors is included in the already sent colors (i.e. children_colors | node_colors)
      needToUpdate = ((p->color | children_colors | node_colors) != (children_colors | node_colors));

      // update the children colors adding the received ones
      children_colors |= (p->color);

      ulog("MulticastToken", "End of intercept. Colors: [children=%8s], forward=%d", btoa(children_colors), needToUpdate);

      return needToUpdate;
    }else if (p->flags & MT_FLAGS_REBUILD){
      // This should never happen
      ulog("MulticastToken", "FATAL ERROR: received MT_FLAGS_REBUILD from CtpForward!");
      return FALSE;
    }else{
      // Data Message
      // TODO
      ulog("MulticastToken", "TODO: handling data message");

      // If the message is for me
      if (p->color & node_colors){
        handleReceivedData(p->data);
        // If the message is anycast, then stop it: I have already received it.
        return ! (p->flags & MT_FLAGS_ANYCAST);
      }
      return TRUE;
    }
    return FALSE;
  }

  event void RadioControl.stopDone(error_t error) {}

}