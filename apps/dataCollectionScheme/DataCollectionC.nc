#include <Timer.h>
#include <AM.h>
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
    interface Read<uint16_t> as TempRead;
  }
}
implementation
{
  // Alloc a packet in memory
  message_t pkt;

  // The pointer to the payload of the packet
  DataMsg* payload;

  // Initially I don't know my parent
  bool known_parent = FALSE;
  am_addr_t current_parent;
  
  bool sending = FALSE;
  
  // Sequence number used to track the current iteration of the sensor read
  uint16_t seq = 0;

  event void Boot.booted(){
    // Get now the payload pointer. This will always be the same
    payload = (DataMsg*) (call Packet.getPayload(&pkt, sizeof(DataMsg)));

    call AMControl.start();
  }

  event void AMControl.startDone(error_t err){
    if (err != SUCCESS)
      call AMControl.start();

    // I'll start collecting data when I'll know my parent
  }

  event void AMControl.stopDone(error_t err){}

  // Flush the message queue. Take a message from the queue
  // and try to send it
  task void flushMessagesQueue(){
    error_t error;

    if (sending || call Queue.empty())
      return;

    // Get the first message. Do not remove it from the queue!
    // Remove it only when the packet is delivered
    *payload = call Queue.head();

    // The request_ack flag must be set every time you need to send a packet. Srsly?
    call Acks.requestAck(&pkt);

    error = call AMSend.send(current_parent, &pkt, sizeof(DataMsg));
    if (error == SUCCESS){
      sending = TRUE;
    } else {
      dbg("collection", "\n\n\n\nERROR\t%u\n", error);

      // Retry to send the message
      post flushMessagesQueue();
    }
  }
 
  event void TimerApp.fired(){
    call TempRead.read();
  }

  event void TempRead.readDone(error_t result, uint16_t val){
    /* Value read from zolertia must be divided by 16 */
    /* On the tmote
        realValue = 0.01 * val - 39.4
    */
    
    DataMsg data;
    data.source = TOS_NODE_ID;
    data.value = val / 16;
    data.sequence = ++seq;

    call Queue.enqueue(data);
    post flushMessagesQueue();
  }

  event void AMSend.sendDone(message_t* msg, error_t error)
  {
    sending = FALSE;

    if (error == SUCCESS && call Acks.wasAcked(msg)){
      // The message was delivered. We can safely remove it from the queue
      call Queue.dequeue();

      // Another round of flushMessagesQueue(), in case other messages are pending
      post flushMessagesQueue();
    } else {
      // Something went wrong. Let's schedule another retransmission
      // after a random delay

      // Delay is Uniform(0, 16) msec
      uint16_t delay = call Random.rand16() / (65536 / 16);

      dbg("collection", "%s: Error while transmitting the packet. Retrying after %u msec\n", sim_time_string(), delay);
      
      call TimerRetransmit.startOneShot(delay);
    } 
  }

  event void TimerRetransmit.fired(){
    //dbg("collection", "%s: TimerRetransmit expired.\n", sim_time_string());

    // Time is up! Let's retry to flush the queue
    // (-> send again the first ready message)
    post flushMessagesQueue();
  }

  event message_t* Receive.receive(message_t* recv_msg, void* recv_payload, uint8_t recv_len)
  {
    if (recv_len == sizeof(DataMsg)){
      switch (TOS_NODE_ID) {
        // If I'm the Sink
        case 0:
          dbg("collection", "%s: Received [source=%d,value=%d,seq=%d] from %d.\n", sim_time_string(), ((DataMsg *) recv_payload)->source, ((DataMsg *) recv_payload)->value, ((DataMsg *) recv_payload)->sequence, call AMPacket.source(recv_msg));
          break;

        // If I'm a sensor
        default:
          dbg("collection", "%s: Received [source=%d,value=%d,seq=%d] from %d. Forwarding to %d...\n", sim_time_string(), ((DataMsg *) recv_payload)->source, ((DataMsg *) recv_payload)->value, ((DataMsg *) recv_payload)->sequence, call AMPacket.source(recv_msg), current_parent);

          // If the queue is full, discard the message
          if (call Queue.size() == call Queue.maxSize()){
            dbg("collection", "%s: My queue is full. Refuse to forward the message.\n", sim_time_string());
            return recv_msg;
          }

          // Append the payload to the queue and flush it
          call Queue.enqueue(* (DataMsg *) recv_payload);

          post flushMessagesQueue();
      }
    }
    return recv_msg;
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
