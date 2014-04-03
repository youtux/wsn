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

  // Utilities
  App.Queue -> QueueC;
  App.Random -> RandomC;

  // Sensors and actuators
  App.Leds -> LedsC;
  App.TempRead -> TempSensor.Read;

  // Timers
  App.TimerApp -> Timer0;
  App.TimerRetransmit -> Timer1;

  // Network stuff
  App.Packet -> AMSenderC;
  App.AMPacket -> ActiveMessageC;
  App.AMSend -> AMSenderC;
  App.AMControl -> ActiveMessageC;
  App.Receive -> AMReceiverC;
  App.Acks -> ActiveMessageC;

  // Routing
  App.TreeConnection -> TreeRoutingC;
}

