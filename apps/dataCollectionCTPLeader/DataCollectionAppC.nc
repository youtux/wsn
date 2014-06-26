#include "LeaderElection.h"
#define COLL_ID 11


configuration DataCollectionAppC
{
}
implementation
{
  components DataCollectionC as App;

  components MainC;
  components new TimerMilliC() as Timer0;
  components new TimerMilliC() as Timer1;
  components new TimerMilliC() as Timer2;

  // Temperature sensor is not available in TOSSIM
#ifndef TOSSIM
  components new SimpleTMP102C() as TempSensor;
#else
  components new DemoSensorC() as TempSensor;
  components RandomC;
#endif

  
  components ActiveMessageC;
  components new CollectionSenderC(COLL_ID);
  components CollectionC;

  components new AMSenderC(AM_LEADER_ELECTION);
  components new AMReceiverC(AM_LEADER_ELECTION);


  App.Boot -> MainC.Boot;

  App.TempRead -> TempSensor.Read;
  App.TimerDataCollection -> Timer0;
  App.Random -> RandomC;

  App.RadioControl -> ActiveMessageC;
  App.RoutingControl -> CollectionC.StdControl;
  App.RootControl -> CollectionC.RootControl;
  App.Send -> CollectionSenderC;
  App.Receive -> CollectionC.Receive[COLL_ID];
  App.CtpInfo -> CollectionC.CtpInfo;
  App.PacketAck -> ActiveMessageC;

  App.SinkTimeout -> Timer2;

  App.LeaderElectionSend -> AMSenderC;
  App.LeaderElectionReceive -> AMReceiverC;

  App.LeaderElectionTimer -> Timer1;

}

