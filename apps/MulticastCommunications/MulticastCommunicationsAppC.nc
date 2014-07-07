#include "MulticastCommunications.h"

configuration MulticastCommunicationsAppC {}

implementation {
	components MulticastCommunicationsC as App;
  
  components MainC;
  App.Boot -> MainC.Boot;

  components RandomC;
  App.Random -> RandomC;

  // Timers
  components new TimerMilliC() as Timer0;
  App.ResetTreePeriod -> Timer0;

  components new TimerMilliC() as Timer1;
  App.TxTimer -> Timer1;

  components new TimerMilliC() as Timer2;
  App.SendTimer -> Timer2;

  components new TimerMilliC() as Timer3;
  App.TimeoutLostResetTree -> Timer3;

  // Forwarder queue
  components new QueueC(message_t *, 10) as ForwardQueue;
  App.ForwardQueue -> ForwardQueue;

  // Memory management for the forwarding queue
  components new PoolC(message_t, 10) as ForwardPool;
  App.ForwardPool -> ForwardPool;

  // Radio
  components ActiveMessageC;
  App.RadioControl -> ActiveMessageC;

  // CTP
  components CollectionC;
  App.CtpRoutingControl -> CollectionC.StdControl;
  App.CtpRootControl -> CollectionC.RootControl;
  App.CtpReceive -> CollectionC.Receive[MC_MSG_ID];
  App.CtpIntercept -> CollectionC.Intercept[MC_MSG_ID];
  //App.CtpPacket -> CollectionC.CtpPacket;

  components new CollectionSenderC(MC_MSG_ID);
  App.CtpSend -> CollectionSenderC;

  // Send and receive
  components new AMSenderC(MC_MSG_ID) as AMSender;
  components new AMReceiverC(MC_MSG_ID) as AMReceiver;
  App.AMSend -> AMSender;
  App.AMReceive -> AMReceiver;
}
