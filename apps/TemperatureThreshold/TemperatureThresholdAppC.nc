configuration TemperatureThresholdAppC {}

implementation {
    components MainC,
               TemperatureThresholdC,
               LedsC;
    components new TimerMilliC() as Timer0;
    components new SimpleTMP102C() as TempSensor;

    TemperatureThresholdC -> MainC.Boot; // Component_uses -> Component_provides
    TemperatureThresholdC.BlinkTimer -> Timer0;
    TemperatureThresholdC.Leds -> LedsC;
    TemperatureThresholdC.TempRead -> TempSensor.Read;
}
