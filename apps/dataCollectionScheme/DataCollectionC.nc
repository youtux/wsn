#include <Timer.h>
#include "DataMsg.h"

module DataCollectionC
{
  uses{
    interface Timer<TMilli> as TimerApp;
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
  //TODO
  message_t pkt;
  uint16_t current_parent;
  bool sending;

  event void Boot.booted(){
    current_parent = TOS_NODE_ID;
    call AMControl.start();
  }

  //TODO
  event void AMControl.startDone(error_t err){
    if (err == SUCCESS){
      if (TOS_NODE_ID != 0){
        call TimerApp.startPeriodic(APP_PERIOD);
      }
    } else {
      call AMControl.start();
    }
  }

  event void AMControl.stopDone(error_t err){}

  // For sending packets of its own as well as others packets down the tree.
  task void forwardMessage(){
    if (!sending){
      if (! call Queue.empty()){
        DataMsg* msg = (DataMsg*) (call Packet.getPayload(&pkt, sizeof(DataMsg)));
        error_t error;
        *msg = call Queue.dequeue();
    /*     dbg("routing", "NOT\tSEQ\t%u\tCOST\t%u\n", current_seq_no, current_hops_to_sink); */
        if ((error = call AMSend.send(current_parent, &pkt, sizeof(DataMsg))) == SUCCESS){
          // call Leds.led2On();
          sending = TRUE;
        } else {
          dbg("collection", "\n\n\n\nERROR\t%u\n", error);
          post forwardMessage();
        }
      }
    } else {
      post forwardMessage();
    }
  }
  task void sendData(){
    if (! sending ) {
      DataMsg* msg = (DataMsg*) (call Packet.getPayload(&pkt, sizeof(DataMsg)));
      error_t error;

      DataMsg data;
      data.source = TOS_NODE_ID;
      data.value = 42;

      *msg = data;
      
      if ((error = call AMSend.send(current_parent, &pkt, sizeof(DataMsg))) == SUCCESS){
          // call Leds.led2On();
          sending = TRUE;
      } 
      else {
        dbg("collection", "\n\n\n\nERROR\t%u\n", error);
        post forwardMessage();
      }
    } else {
      post sendData();
    }
  }
 
  event void TimerApp.fired(){
    post sendData();
  }

  event void AMSend.sendDone(message_t* msg, error_t error)
  {
    if (error == SUCCESS){      
      sending = FALSE;
    }
  }

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len)
  {
    if (len == sizeof(DataMsg)){
      if (TOS_NODE_ID != 0){
        if (call Queue.size() > 12)
          return msg;

        call Queue.enqueue(* ((DataMsg *) payload) );
        dbg("collection", "%s: Received from %d value %d. Forwarding\n", sim_time_string(), ((DataMsg *) payload)->source, ((DataMsg *) payload)->value);
        post forwardMessage();
      } else {
        dbg("collection", "%s: Received from %d value %d\n", sim_time_string(), ((DataMsg *) payload)->source, ((DataMsg *) payload)->value);
      }
    }
    return msg;
  }

  /* A signal from the tree routing layer about 
  the parent update. Now all next messages should 
  ONLY be sent to the new parent (unicast, NOT broadcast).*/
  //TODO
  event void TreeConnection.parentUpdate(uint16_t parent){
    current_parent = parent;
  }
}
