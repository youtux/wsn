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

  event void Boot.booted(){
    call AMControl.start();
  }

  //TODO
  event void AMControl.startDone(error_t err){
    if (err != SUCCESS){
      call AMControl.start();
    }
  }

  event void AMControl.stopDone(error_t err){}

  // For sending packets of its own as well as others packets down the tree.
  task void forwardMessage(){
  }

  //TODO 
  event void TimerApp.fired(){
  }

  //TODO
  event void AMSend.sendDone(message_t* msg, error_t error)
  {
    if (error == SUCCESS){      
    }
  }

  //TODO
  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len)
  {
    if (len == sizeof(DataMsg)){
    }
    return msg;
  }

  /* A signal from the tree routing layer about 
  the parent update. Now all next messages should 
  ONLY be sent to the new parent (unicast, NOT broadcast).*/
  //TODO
  event void TreeConnection.parentUpdate(uint16_t parent){
  }
}
