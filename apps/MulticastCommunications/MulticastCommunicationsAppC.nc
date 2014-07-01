#include "MulticastCommunications.h"

configuration MulticastCommunicationsAppC {}

implementation {
	components MulticastCommunicationsC as App;
  components MainC;

  components ActiveMessageC;
  components new CollectionSenderC(MC_MSG_ID);
  components CollectionC;

  components new TimerMilliC() as Timer0;
  components new TimerMilliC() as Timer1;
  components new TimerMilliC() as Timer2;

  components new QueueC(message_t *, 10) as ForwardQueue;
  components new PoolC(message_t, 10) as ForwardPool;

  components RandomC;

  App.Boot -> MainC.Boot;

  App.TimeoutUpdateColors -> Timer0;
  App.SleepBeforeSendingUpdates -> Timer1;
  App.SendTimer -> Timer2;

  App.Random -> RandomC;

  App.ForwardQueue -> ForwardQueue;
  App.ForwardPool -> ForwardPool;

  App.RadioControl -> ActiveMessageC;
  App.RoutingControl -> CollectionC.StdControl;
  App.RootControl -> CollectionC.RootControl;
  App.CtpSend -> CollectionSenderC;
  App.CtpReceive -> CollectionC.Receive[MC_MSG_ID];
  App.CtpIntercept -> CollectionC.Intercept[MC_MSG_ID];
  App.CtpPacket -> CollectionC.CtpPacket;

  //App.Packet -> ActiveMessageC;
  //App.AMPacket -> ActiveMessageC;


  components new AMSenderC(MC_MSG_ID) as AMSenderMsg;
  components new AMReceiverC(MC_MSG_ID) as AMReceiverMsg;
  App.AMSend -> AMSenderMsg;
  App.AMReceive -> AMReceiverMsg;
}
