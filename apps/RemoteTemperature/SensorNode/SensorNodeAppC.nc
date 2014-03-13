#include "../Wireless.h"
configuration SensorNodeAppC {}

implementation {
    components MainC,
               SensorNodeC as App,
               LedsC;
    components new TimerMilliC() as BlinkTimer;

    components UserButtonC;

    //components new SimpleTMP102C() as TempSensor;

    // Radio stuff
    components ActiveMessageC;
    components new AMSenderC(AM_WIRELESS_MSG) as Sender;


    App -> MainC.Boot; // Component_uses -> Component_provides
    App.BlinkTimer -> BlinkTimer;
    App.Leds -> LedsC;
    //App.TempRead -> TempSensor.Read;

    App.AMControl -> ActiveMessageC;
    App.Packet -> ActiveMessageC;
    App.AMSend -> Sender;

    App.Button -> UserButtonC;
}
