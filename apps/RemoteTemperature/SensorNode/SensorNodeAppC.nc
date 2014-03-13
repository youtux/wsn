#include "../Wireless.h"
configuration SensorNodeAppC {}

implementation {
    components SensorNodeC as App,
               MainC,
               LedsC;

    components new TimerMilliC() as ReadTimer;
    components new SimpleTMP102C() as TemperatureSensor;

    // Radio components
    components ActiveMessageC;
    components new AMSenderC(AM_WIRELESS_MSG) as Sender;


    App -> MainC.Boot; // Component_uses -> Component_provides
    App.Leds -> LedsC;
    App.ReadTimer -> ReadTimer;
    App.TemperatureRead -> TemperatureSensor.Read;

    // Radio bindings
    App.AMControl -> ActiveMessageC;
    App.Packet -> ActiveMessageC;
    App.AMSend -> Sender;
}
