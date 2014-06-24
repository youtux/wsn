#include "MulticastToken.h"

configuration MulticastTokenAppC {}

implementation {
	components MulticastTokenC as App;
  components MainC;

  components ActiveMessageC;
  components new CollectionSenderC(MT_COLL_ID);
  components CollectionC;

  components new TimerMilliC() as Timer0;

  App.Boot -> MainC.Boot;

  App.TimerUpdateColors -> Timer0;

  App.RadioControl -> ActiveMessageC;
  App.RoutingControl -> CollectionC.StdControl;
  App.RootControl -> CollectionC.RootControl;
  App.Send -> CollectionSenderC;
  App.Receive -> CollectionC.Receive[MT_COLL_ID];
}
