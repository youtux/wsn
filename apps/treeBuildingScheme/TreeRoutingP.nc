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

  // Packet payload
  tree_building_t data_to_send;

  // Current sequence number for tree building.
  // When a received packet has a greater seq number, then it's time
  // to rebuild the tree, so I discard the old parent & data
  uint16_t seq;

  uint16_t cache_voltage = 1;

  bool hasParent = FALSE;
  am_addr_t parent;
  packet_quality_t parent_quality;

  float compareQuality(packet_quality_t * a, packet_quality_t * b){
    float result;

    uint8_t hopcount_norm = 2;
    uint8_t rssi_norm = 20;
    uint16_t batteryLevel_norm = 1;

    result = (float) (a->rssi - b->rssi) / rssi_norm;
    result += (float) (b->hopcount - a->hopcount) / hopcount_norm;
    result += (float) (a->batteryLevel - b->batteryLevel) / batteryLevel_norm;
    
    /*dbg("routing", "(b->hopcount - a->hopcount) / hopcount_norm = %f\n\
(a->rssi - b->rssi) / rssi_norm = %f\n\
(a->batteryLevel - b->batteryLevel) / batteryLevel_norm = %f\n\
result = %f\n",
(float) (a->rssi - b->rssi) / rssi_norm,
(float) (b->hopcount - a->hopcount) / hopcount_norm,
(float) (a->batteryLevel - b->batteryLevel) / batteryLevel_norm,
result);
    */
    return result;
  }
  
  event void Boot.booted(){
    call ReadVoltage.read();
    call AMControl.start();
  }

  event void ReadVoltage.readDone(error_t result, uint16_t val){
    if (result == SUCCESS){
      cache_voltage = result;
    }
  }

  event void AMControl.startDone(error_t err){
    if (err == SUCCESS){
      if (TOS_NODE_ID == 0){
        seq = 0;
        // NODE 0 IS THE SINK WHICH PERIODICALLY REBUILDS THE TREE
        data_to_send.seq = seq;
        data_to_send.hopcount = 0; //I'm the sink, for now
        data_to_send.batteryLevel = cache_voltage;

        call TimerRefresh.startPeriodic(REBUILD_PERIOD);
        //call TimerRefresh.startOneShot(REBUILD_PERIOD);
      } 
    }else {
      call AMControl.start();
    }
  }

  event void AMControl.stopDone(error_t err){}

  task void sendNotification(){
    if (!sending){
      tree_building_t* payload = (tree_building_t*) (call Packet.getPayload(&pkt, sizeof(tree_building_t)));

      payload->seq = data_to_send.seq;
      payload->hopcount = data_to_send.hopcount;
      payload->batteryLevel = data_to_send.batteryLevel;

      dbg("routing", "%s: Sending beacon [source=%d, hopcount=%d, batteryLevel=%d, seq=%d]...\n",sim_time_string(), TOS_NODE_ID, data_to_send.hopcount, data_to_send.batteryLevel, seq);

      if (call AMSend.send(AM_BROADCAST_ADDR, &pkt, sizeof(tree_building_t)) == SUCCESS)
        sending = TRUE;
    }
  }

  event void TimerRefresh.fired(){
    seq++;
    data_to_send.seq = seq;
    dbg("routing", "%s: Incrementing sequence. Now is %d.\n", sim_time_string(), seq);
    post sendNotification();
  }

  event void TimerNotification.fired(){
    post sendNotification();
  }

  event void AMSend.sendDone(message_t* msg, error_t error)
  {
    if (&pkt == msg){
      if (error == SUCCESS)
        //dbg("routing", "NOTIFICATION SENT at %s\n", sim_time_string());
        {}
      else
        post sendNotification();
    }
    sending = FALSE;
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
    if (len == sizeof(tree_building_t) && TOS_NODE_ID != 0){
      am_addr_t source;
      packet_quality_t packet_quality;
      uint16_t packet_seq;

      source  = call AMPacket.source(msg);

      packet_quality.rssi = (uint16_t)getRssi(msg); // large value of rssi = better link
      packet_quality.hopcount = ((tree_building_t*) payload)->hopcount;
      packet_quality.batteryLevel = ((tree_building_t*) payload)->batteryLevel;
      
      packet_seq = ((tree_building_t*) payload)->seq;

      dbg("routing", "%s: Received beacon. [source=%d, hopcount=%d, rssi=[%hhi, %d], seq=%d]\n", sim_time_string(), source, packet_quality.hopcount, packet_quality.rssi, packet_quality.rssi, packet_seq);

      if (seq < packet_seq){
        hasParent = FALSE;
        seq = packet_seq;
        //dbg("routing", "New sequence number.\n");
      }

      if (!hasParent){
        dbg("routing", "%s: Parent is not set. Taking %d as parent.\n", sim_time_string(), source);
      }

      if (!hasParent || compareQuality(&packet_quality, &parent_quality) > 0) {
        uint16_t delay;
        if (hasParent) {
          dbg("routing", "%s: Found a better quality parent [%d]\n", sim_time_string(), source);
        }
        
        parent = source;
        hasParent = TRUE;

        parent_quality = packet_quality; // TODO: check if data is actually being copied

        data_to_send.seq = seq;
        data_to_send.hopcount = parent_quality.hopcount + 1;
        data_to_send.batteryLevel = cache_voltage;
         
        // Delay is Uniform(0, 16) msec
        delay = call Random.rand16() / (65536 / 16);
        // dbg("routing", "Generated delay = %d\n", delay);
        call TimerNotification.startOneShot(delay);
      }
    }
    return msg;
  }
}
