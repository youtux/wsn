#include <Timer.h>
#include "TreeBuilding.h"

module TreeRoutingP
{
  provides{
    interface TreeConnection;
  }
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
  uint16_t current_seq_no;
  uint16_t current_parent;
  uint16_t current_hops_to_sink; 
  uint8_t current_rssi_to_parent; 
  uint16_t num_received;

  
  event void Boot.booted(){
    current_parent = TOS_NODE_ID;
    current_seq_no = 0;
    num_received = 0;
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
    error_t error;
    msg->seq_no = current_seq_no;
    msg->metric = current_hops_to_sink;
/*     dbg("routing", "NOT\tSEQ\t%u\tCOST\t%u\n", current_seq_no, current_hops_to_sink); */
    if ((error = call AMSend.send(AM_BROADCAST_ADDR, &pkt,
    sizeof(TreeBuilding))) == SUCCESS){
      call Leds.led2On();
      sending = TRUE;
    } 
    else {
      dbg("routing", "\n\n\n\nERROR\t%u\n", error);
      // retry after a random time
      call TimerNotification.startOneShot(call Random.rand16()%100);
    }  
  }

  event void TimerRefresh.fired(){
    if (!sending){
      current_seq_no++;
      post sendNotification();
    }
  }

  event void TimerNotification.fired(){
    if (!sending){
      post sendNotification();
    }
  }

  event void AMSend.sendDone(message_t* msg, error_t error)
  {
    if (error == SUCCESS)
      sending = FALSE;
    else // retry sending the notification
      call TimerNotification.startOneShot(call Random.rand16()%100);
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

  inline void updateParent(uint16_t new_parent, uint16_t new_hops_to_sink, uint8_t new_rssi_to_parent){
  current_parent=new_parent;
  current_hops_to_sink=new_hops_to_sink; 
  current_rssi_to_parent=new_rssi_to_parent; 
  dbg("routing", "NEW PARENT\t%u\tCOST\t%u\tRSSI\t%hhi\n", current_parent, current_hops_to_sink,current_rssi_to_parent );
  // Inform the collection layer about the new parent
  signal TreeConnection.parentUpdate(current_parent);
  // Inform neighboring nodes after a random time
  call TimerNotification.startOneShot(call Random.rand16()%100);
}

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len)
  {
    if (len == sizeof(TreeBuilding) && TOS_NODE_ID != 0){
      TreeBuilding* treemsg = (TreeBuilding*) payload;
      uint16_t hops_to_sink_through_sender = treemsg->metric + 1;
      uint8_t rssi_to_sender= getRssi(msg);
      num_received++;
       dbg("routing", "Received MSG# %u\tSOURCE %u\tSEQ %u\tHops %u\tRSSI %hhi\n", num_received, call AMPacket.source(msg), treemsg->seq_no, hops_to_sink_through_sender, rssi_to_sender); 
      if (treemsg->seq_no < current_seq_no)
        return msg;
      if (treemsg->seq_no > current_seq_no){
        //New refresh round, therefore update the seqno and parent
        dbg("routing", "New Round, New Parent\n"); 
        current_seq_no = treemsg->seq_no;
        updateParent(call AMPacket.source(msg),hops_to_sink_through_sender, rssi_to_sender );
      } else if (treemsg->seq_no == current_seq_no) {
       if (current_hops_to_sink > hops_to_sink_through_sender){
          dbg("routing", "New Parent with less hops to sink\n"); 
          updateParent(call AMPacket.source(msg),hops_to_sink_through_sender, rssi_to_sender);
        }
        else if ((current_hops_to_sink == hops_to_sink_through_sender) && (current_rssi_to_parent< rssi_to_sender)){
          dbg("routing", "New Parent with same #hops BUT better rssi\n"); 
           updateParent(call AMPacket.source (msg),hops_to_sink_through_sender, rssi_to_sender);
        }
        else if (call AMPacket.source(msg) == current_parent){
          dbg("routing", "the parent now has more hops to sink\n"); 
          updateParent(call AMPacket.source (msg),hops_to_sink_through_sender, rssi_to_sender);
        }
      }
    }
    return msg;
  }

  event void ReadVoltage.readDone(error_t result, uint16_t val){}
}
