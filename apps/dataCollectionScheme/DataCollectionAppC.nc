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

  App.Boot -> MainC.Boot;
  App.TimerApp -> Timer0;
  App.TimerRetransmit -> Timer1;
  App.Leds -> LedsC;
  App.Packet -> AMSenderC;
  App.AMPacket -> ActiveMessageC;
  App.AMSend -> AMSenderC;
  App.AMControl -> ActiveMessageC;
  App.Receive -> AMReceiverC;
  App.Random -> RandomC;
  App.TreeConnection -> TreeRoutingC;
  App.Queue -> QueueC;
  App.Acks -> ActiveMessageC;
}

