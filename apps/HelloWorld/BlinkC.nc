module BlinkC {
    uses interface Timer<TMilli> as BlinkTimer;
    uses interface Leds;
    uses interface Boot;
}

implementation {
    uint8_t counter = 0;
    event void Boot.booted() {
        call BlinkTimer.startPeriodic(1000);
    }

    event void BlinkTimer.fired() {
        call Leds.set(counter);
        counter++;
    }
}
