module TemperatureThresholdC {
    uses interface Timer<TMilli> as BlinkTimer;
    uses interface Leds;
    uses interface Boot;
    uses interface Read<uint16_t> as TempRead;
}

implementation {
    event void Boot.booted() {
        call BlinkTimer.startPeriodic(1000);
    }

    event void BlinkTimer.fired() {
        call TempRead.read();
    }
    event void TempRead.readDone(error_t result, uint16_t val){
        if (val / 16.0 < 27){
            call Leds.led0Off();
        }else{
            call Leds.led0On();
        }
    }
}
