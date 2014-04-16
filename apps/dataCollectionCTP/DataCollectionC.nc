#include <Timer.h>

#define PERIOD 5 * 1024

module DataCollectionC
{
  uses{
    interface Boot;

    interface Read<uint16_t> as TempRead;
    interface Timer<TMilli> as TimerDataCollection;

    interface SplitControl as RadioControl;
    interface StdControl as RoutingControl;
    interface RootControl;
    interface Send;
    interface Receive;

  }
}
implementation
{
  message_t packet;
  bool sending = FALSE;

  typedef nx_struct TemperatureCollectionMsg {
    nx_am_addr_t source;
    nx_uint16_t value;
  } TemperatureCollectionMsg;

  event void Boot.booted() {
    call RadioControl.start();
  }

  event void RadioControl.startDone(error_t error) {
    if (error != SUCCESS)
      call RadioControl.start();
    else {
      call RoutingControl.start();
      if (TOS_NODE_ID == 0) 
        call RootControl.setRoot();
      else
        call TimerDataCollection.startPeriodic(PERIOD);
    }
  }

  event void TimerDataCollection.fired() {
    call TempRead.read();
  }

  event void TempRead.readDone(error_t result, uint16_t val){
    uint16_t tempValue;
    TemperatureCollectionMsg* payload;

#ifndef TOSSIM
    tempValue = val / 16;
#else
    tempValue = val;
#endif
    payload = (TemperatureCollectionMsg *) call Send.getPayload(&packet, sizeof(TemperatureCollectionMsg));
    payload->source = TOS_NODE_ID;
    payload->value = tempValue;

    if (sending)
      return;

    if (call Send.send(&packet, sizeof(TemperatureCollectionMsg)) == SUCCESS)
      sending = TRUE;
  }

  event void Send.sendDone(message_t* msg, error_t error) {
    sending = FALSE;
    if (error != SUCCESS){
      dbg("collection", "%s: Error while sending the message.\n", sim_time_string());
    }
  }

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {
    TemperatureCollectionMsg* p = (TemperatureCollectionMsg *) payload;
    dbg("collection", "%s: Received message [source=%d, value=%d].\n", sim_time_string(), p->source, p->value);
    return msg;
  }

  event void RadioControl.stopDone(error_t error) {}
}
