#include <Timer.h>
#include "DataMsg.h"

module DataCollectionC
{
  uses{
    interface Timer<TMilli> as TimerApp;
    interface Timer<TMilli> as TimerRetransmit;
    interface Leds;
    interface Boot;
    interface PacketAcknowledgements as Acks;
    interface Packet;
    interface AMPacket;
    interface AMSend;
    interface SplitControl as AMControl;
    interface Receive;
    interface Random;
    interface Queue<DataMsg>;
    interface TreeConnection;
  }
}
implementation
{
  message_t pkt;

  // Initially I don't know our parent, so I'll send messages to everyone
  uint16_t current_parent;
  bool sending;

  bool known_parent = FALSE;
  uint16_t seq = 0;

  event void Boot.booted(){
    current_parent = TOS_NODE_ID;
    call AMControl.start();
  }

  event void AMControl.startDone(error_t err){
    if (err == SUCCESS){
      // I'll start collecting data when I'll know my parent
    } else {
      call AMControl.start();
    }
  }

  event void AMControl.stopDone(error_t err){}

  // Self explanatory
  task void flushMessagesQueue(){
    if (!sending){
      if (! call Queue.empty()){
        DataMsg* msg = (DataMsg*) (call Packet.getPayload(&pkt, sizeof(DataMsg)));
        error_t error;

        // Get the first ready message. Do not remove it from the queue!
        // Remove it only when the packet is delivered
        *msg = call Queue.head();

        // We want the ack. This could probably be called once and forever,
        // but let's just be safe
        call Acks.requestAck(&pkt);

        error = call AMSend.send(current_parent, &pkt, sizeof(DataMsg));
        if (error == SUCCESS){
          sending = TRUE;
        } else {
          dbg("collection", "\n\n\n\nERROR\t%u\n", error);
          post flushMessagesQueue();
        }
      }
    } else {
      post flushMessagesQueue();
    }
  }
 
  event void TimerApp.fired(){
    DataMsg data;
    data.source = TOS_NODE_ID;
    data.value = ++seq;
    call Queue.enqueue(data);
    post flushMessagesQueue();
  }

  event void AMSend.sendDone(message_t* msg, error_t error)
  {
    sending = FALSE;

    if (error != SUCCESS || !call Acks.wasAcked(msg)){
      uint16_t delay;
      // Something went wrong. Let's schedule another retransmission
      // after a random delay

      // Delay is Uniform(0, 16) msec    
      delay = call Random.rand16() / (65536 / 16);

      dbg("collection", "%s: Error while transmitting the packet. Retrying after %u msec\n", sim_time_string(), delay);
      
      call TimerRetransmit.startOneShot(delay);
    }else{
      // The message was delivered. We can safely remove it from the queue
      call Queue.dequeue();

      sending = FALSE;
    }
  }

  event void TimerRetransmit.fired(){
    dbg("collection", "%s: TimerRetransmit expired.\n", sim_time_string());

    post flushMessagesQueue();
  }

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len)
  {
    if (len == sizeof(DataMsg)){
      if (TOS_NODE_ID != 0){
        // If the queue is full, discard the message
        if (call Queue.size() == call Queue.maxSize()){
          dbg("collection", "%s: My queue is full. Refuse to forward the message.\n", sim_time_string());
          return msg;
        }

        dbg("collection", "%s: Received [source=%d,value=%d] from %d. Forwarding to %d...\n", sim_time_string(), ((DataMsg *) payload)->source, ((DataMsg *) payload)->value, call AMPacket.source(msg), current_parent);

        // Append the payload to the queue and flush it
        call Queue.enqueue(* ((DataMsg *) payload) );

        post flushMessagesQueue();
      } else {
        dbg("collection", "%s: Received [source=%d,value=%d] from %d.\n", sim_time_string(), ((DataMsg *) payload)->source, ((DataMsg *) payload)->value, call AMPacket.source(msg));
      }
    }
    return msg;
  }

  /* A signal from the tree routing layer about 
  the parent update. Now all next messages should 
  ONLY be sent to the new parent (unicast, NOT broadcast).*/
  event void TreeConnection.parentUpdate(uint16_t parent){
    current_parent = parent;

    if( !known_parent && TOS_NODE_ID != 0){
      // Start collecting data if this was the first time I got a parent
      known_parent = TRUE;
      call TimerApp.startPeriodic(APP_PERIOD);
    }
  }
}
