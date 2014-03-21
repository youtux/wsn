#include <Timer.h>
#include "TreeBuilding.h"

module TreeRoutingP
{
  uses{
    interface Timer<TMilli> as TimerRefresh;
    interface Timer<TMilli> as TimerNotification;
    interface Leds;
    interface Boot;
    interface Packet;
    interface AMPacket;
    interface AMSend;
    interface SplitControl as AMControl;
    interface Receive;
#ifndef TOSSIM
    interface CC2420Packet;
#else
    interface TossimPacket; 
#endif
    interface Read<uint16_t> as ReadVoltage;
    interface Random;
  }
}

implementation {
  message_t pkt;
  bool sending;
  
  event void Boot.booted(){
    call AMControl.start();
  }

  event void AMControl.startDone(error_t err){
    if (err == SUCCESS){
      if (TOS_NODE_ID == 0){
        // NODE 0 IS THE SINK WHICH PERIODICALLY REBUILDS THE TREE
        call TimerRefresh.startPeriodic(REBUILD_PERIOD);
      }
    } else {
      call AMControl.start();
    }
  }

  event void AMControl.stopDone(error_t err){}

  task void sendNotification(){
    TreeBuilding* msg = (TreeBuilding*) (call Packet.getPayload(&pkt, sizeof(TreeBuilding)));
    if (call AMSend.send(AM_BROADCAST_ADDR, &pkt,
                         sizeof(TreeBuilding)) == SUCCESS)
      sending = TRUE;
  }

  event void TimerRefresh.fired(){
    if (!sending)
      post sendNotification();
  }

  event void TimerNotification.fired(){}

  event void AMSend.sendDone(message_t* msg, error_t error)
  {
    if (&pkt == msg && error == SUCCESS){
      dbg("routing", "NOTIFICATION SENT at %s\n", sim_time_string());
      sending = FALSE;
    }
    else
      post sendNotification();
  }

  inline uint8_t getRssi(message_t* msg){
    uint8_t rssi ;
#ifndef TOSSIM
    rssi = call CC2420Packet.getRssi(msg); // or CC2420Packet.getLqi(msg);
#else
    rssi = call TossimPacket.strength(msg); 
#endif
    return rssi;
  }


  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len)
  {
    
    uint16_t rssi = (uint16_t)getRssi(msg); // large value of rssi = better link
    if (len == sizeof(TreeBuilding))

     dbg("routing", "RECEIVED MSG FROM %u with rssi %hhi and %d\n", call AMPacket.source(msg), rssi, rssi);

    return msg;
  }

  event void ReadVoltage.readDone(error_t result, uint16_t val){}
}
