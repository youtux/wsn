#define COLL_ID 0

configuration DataCollectionAppC
{
}
implementation
{
  components DataCollectionC as App;

  components MainC;
  components new TimerMilliC() as Timer0;

  // Temperature sensor is not available in TOSSIM
#ifndef TOSSIM
  components new SimpleTMP102C() as TempSensor;
#else
  components new DemoSensorC() as TempSensor;
#endif
  
  components ActiveMessageC;
  components new CollectionSenderC(COLL_ID);
  components CollectionC;

  App.Boot -> MainC.Boot;

  App.TempRead -> TempSensor.Read;
  App.TimerDataCollection -> Timer0;

  App.RadioControl -> ActiveMessageC;
  App.RoutingControl -> CollectionC.StdControl;
  App.RootControl -> CollectionC.RootControl;
  App.Send -> CollectionSenderC;
  App.Receive -> CollectionC.Receive[COLL_ID];

}

