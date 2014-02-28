module TemperatureThresholdC {
    uses interface Timer<TMilli> as BlinkTimer;
    uses interface Leds;
    uses interface Boot;
    uses interface Read<uint16_t> as TempRead;
}

implementation {
    event void Boot.booted() {
        call BlinkTimer.startPeriodic(1000);
        call Leds.led0Off();
        call Leds.led1On();
    }

    event void BlinkTimer.fired() {
        call TempRead.read();
    }
    event void TempRead.readDone(error_t result, uint16_t val){
        /* Value read from zolertia must be divided by 16 */
        /* On the tmote
            realValue = 0.01 * val - 39.4
        */
        if (val / 16.0 < 28){
            call Leds.led0Off();
            call Leds.led1On();
        }else{
            call Leds.led0On();
            call Leds.led1Off();
        }
    }
}
