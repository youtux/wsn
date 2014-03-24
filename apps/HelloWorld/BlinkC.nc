module BlinkC {
    uses interface Timer<TMilli> as BlinkTimer;
    uses interface Leds;
    uses interface Boot;
}

implementation {
    uint8_t counter = 0;
    event void Boot.booted() {
        //dbg("my-channel", "Booted!\n");
        call BlinkTimer.startPeriodic(1000);
    }

    event void BlinkTimer.fired() {
        // dbg("my-channel", "Timer Fired! counter=[%d]\n", counter);
        call Leds.set(counter);
        counter++;
    }
}
