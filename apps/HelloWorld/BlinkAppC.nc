configuration BlinkAppC {}

implementation {
    components MainC,
               BlinkC,
               LedsC;
    components new TimerMilliC() as Timer0;

    BlinkC -> MainC.Boot; // Component_uses -> Component_provides
    BlinkC.BlinkTimer -> Timer0;
    BlinkC.Leds -> LedsC;
}
