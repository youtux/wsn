#include "../Wireless.h"
#include "printfZ1.h"
#include "Timer.h"

module SinkNodeC {
    uses {
        interface Leds;
        interface Boot;

        interface SplitControl as AMControl;
        interface Packet;
        interface Receive;
    }
}

implementation {
    int temperatureThreshold = 30 * 16; // in °C * 10
    int samplesOverThreshold = 0;

    event void Boot.booted() {
        printfz1_init();

        printfz1("SinkNode: boot\n");
        call AMControl.start();
    }

    event void AMControl.startDone(error_t err){
        if (err == SUCCESS){
            printfz1("SinkNode: Radio ON!\n");
        }else{
            call AMControl.start();
        }
    }


    event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len){
        uint16_t sender = ((wireless_msg_t*) payload)->senderId;
        uint16_t data = ((wireless_msg_t*) payload)->data;

        printfz1("SinkNode: Received message [%u] from node [%u]\n", data, sender);
        printfz1("SinkNode: Temperature is [%d], samples count is [%d]\n", data/16, samplesOverThreshold);

        if (data < temperatureThreshold ){
            // Reset the number of recorded samples over threshold
            samplesOverThreshold = 0;
        }else{
            // Increase the number of samples over threshold
            if( samplesOverThreshold < 5) samplesOverThreshold++;
        }

        if (samplesOverThreshold >= 5)
            call Leds.led0On();
        else
            call Leds.led0Off();

        return msg;
    }

    event void AMControl.stopDone(error_t err){
        // pass
    }
}
