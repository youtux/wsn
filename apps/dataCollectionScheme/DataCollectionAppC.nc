#include "DataMsg.h"

configuration DataCollectionAppC
{
}
implementation
{
  components DataCollectionC;
  components MainC, TreeRoutingC, ActiveMessageC, LedsC;
  components new TimerMilliC() as Timer0;
  components new AMSenderC(AM_DATAMSG);
  components new AMReceiverC(AM_DATAMSG);
  components RandomC;
  components new QueueC(DataMsg, 12);

  DataCollectionC.Boot -> MainC.Boot;
  DataCollectionC.TimerApp -> Timer0;
  DataCollectionC.Leds -> LedsC;
  DataCollectionC.Packet -> AMSenderC;
  DataCollectionC.AMPacket -> ActiveMessageC;
  DataCollectionC.AMSend -> AMSenderC;
  DataCollectionC.AMControl -> ActiveMessageC;
  DataCollectionC.Receive -> AMReceiverC;
  DataCollectionC.Random -> RandomC;
  DataCollectionC.TreeConnection -> TreeRoutingC;
  DataCollectionC.Queue -> QueueC;
  DataCollectionC.Acks -> ActiveMessageC;
}

