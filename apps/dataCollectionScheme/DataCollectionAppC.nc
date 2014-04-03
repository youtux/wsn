#include "DataMsg.h"

configuration DataCollectionAppC
{
}
implementation
{
  components DataCollectionC as App;
  components MainC, TreeRoutingC, ActiveMessageC, LedsC;
  components new TimerMilliC() as Timer0;
  components new TimerMilliC() as Timer1;
  components new AMSenderC(AM_DATAMSG);
  components new AMReceiverC(AM_DATAMSG);
  components RandomC;
  components new QueueC(DataMsg, 12);

  // Temperature sensor is not available in TOSSIM
#ifndef TOSSIM
  components new SimpleTMP102C() as TempSensor;
#else
  components new DemoSensorC() as TempSensor;
#endif

  App.Boot -> MainC.Boot;

  App.TimerApp -> Timer0;
  App.TimerRetransmit -> Timer1;

  App.TempRead -> TempSensor.Read;

  App.Queue -> QueueC;
  App.Leds -> LedsC;
  App.Random -> RandomC;

  App.TreeConnection -> TreeRoutingC;

  App.Packet -> AMSenderC;
  App.AMPacket -> ActiveMessageC;
  App.AMSend -> AMSenderC;
  App.AMControl -> ActiveMessageC;
  App.Receive -> AMReceiverC;
  App.Acks -> ActiveMessageC;
}

