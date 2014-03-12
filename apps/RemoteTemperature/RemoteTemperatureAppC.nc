#include "BlinkToRadio.h"
configuration RemoteTemperatureAppC {}

implementation {
    components MainC,
               RemoteTemperatureC,
               LedsC;
    components new TimerMilliC() as BlinkTimer;
    //components new SimpleTMP102C() as TempSensor;

    // Radio stuff
    components ActiveMessageC;
    components new AMSenderC(MY_AM_ID) as Sender;
    components new AMReceiverC(MY_AM_ID) as Receiver;


    RemoteTemperatureC -> MainC.Boot; // Component_uses -> Component_provides
    RemoteTemperatureC.BlinkTimer -> BlinkTimer;
    RemoteTemperatureC.Leds -> LedsC;
    //RemoteTemperatureC.TempRead -> TempSensor.Read;

    RemoteTemperatureC.AMControl -> ActiveMessageC;
    RemoteTemperatureC.Packet -> ActiveMessageC;
    RemoteTemperatureC.AMSend -> Sender;
    RemoteTemperatureC.Receive -> Receiver;
}
