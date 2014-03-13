#include "../Wireless.h"
configuration SinkNodeAppC {}

implementation {
    components MainC,
               SinkNodeC as App,
               LedsC;
    //components new SimpleTMP102C() as TempSensor;

    // Radio stuff
    components ActiveMessageC;
    components new AMReceiverC(AM_WIRELESS_MSG) as Receiver;


    App -> MainC.Boot; // Component_uses -> Component_provides
    App.Leds -> LedsC;
    //App.TempRead -> TempSensor.Read;

    App.AMControl -> ActiveMessageC;
    App.Packet -> ActiveMessageC;
    App.Receive -> Receiver;
}
