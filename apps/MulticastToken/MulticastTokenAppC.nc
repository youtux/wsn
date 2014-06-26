#include "MulticastToken.h"

configuration MulticastTokenAppC {}

implementation {
	components MulticastTokenC as App;
  components MainC;

  components ActiveMessageC;
  components new CollectionSenderC(MT_MSG_ID);
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
  App.CtpReceive -> CollectionC.Receive[MT_MSG_ID];
  App.CtpIntercept -> CollectionC.Intercept[MT_MSG_ID];
  App.CtpPacket -> CollectionC.CtpPacket;

  //App.Packet -> ActiveMessageC;
  //App.AMPacket -> ActiveMessageC;


  components new AMSenderC(MT_MSG_ID) as AMSenderMsg;
  components new AMReceiverC(MT_MSG_ID) as AMReceiverMsg;
  App.AMSend -> AMSenderMsg;
  App.AMReceive -> AMReceiverMsg;
}
