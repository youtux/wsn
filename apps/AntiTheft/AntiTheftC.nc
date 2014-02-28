#include "ADXL345.h"
#include "printfZ1.h"

module AntiTheftC {
    uses interface Timer<TMilli> as ReadTimer;
    uses interface Leds;
    uses interface Boot;

    uses interface SplitControl as AcclSplitControl;
    uses interface Read<adxl345_readxyt_t> as AcclRead;
}

implementation {
    event void Boot.booted() {
        // Start the accelerometer
        call AcclSplitControl.start();

        // init the serial console
        printfz1_init();

        call ReadTimer.startPeriodic(100);
    }

    event void AcclSplitControl.startDone(error_t error) {
        // call Leds.led1On();
    }

    event void AcclSplitControl.stopDone(error_t error) {
        // call Leds.led1Off();
    }

    event void AcclRead.readDone(error_t result, adxl345_readxyt_t val){
        // read value and do the magic
        call Leds.led0Toggle();
        printfz1("----- Read value -----\nX: %d\nY: %d\nZ: %d\n", val.x_axis, val.y_axis, val.z_axis);
    }

    event void ReadTimer.fired(){
        call Leds.led2Toggle();


        // Send the command to read the XYZ axis
        call AcclRead.read();
    }
}
