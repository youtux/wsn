configuration AntiTheftAppC {}

implementation {
    components MainC,
               AntiTheftC,
               LedsC;
    components new TimerMilliC() as Timer0;
    components new ADXL345C() as Accl;

    AntiTheftC -> MainC.Boot;
    AntiTheftC.Leds -> LedsC;
    AntiTheftC.ReadTimer -> Timer0;

    AntiTheftC.AcclSplitControl -> Accl.SplitControl;
    AntiTheftC.AcclRead -> Accl.XYZ;
}
