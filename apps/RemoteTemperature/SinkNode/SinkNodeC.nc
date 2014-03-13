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
    message_t blinkMsg;
    bool busy;

    event void Boot.booted() {
        call Leds.led0On();

        printfz1_init();
        printfz1("SinkNode: boot\n");
        call AMControl.start();
    }

    event void AMControl.startDone(error_t err){
        if (err == SUCCESS){
            printfz1("SinkNode: Radio ON!\n");
        }
        else
            call AMControl.start();
    }


    event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len){
        uint16_t sender = ((wireless_msg_t*) payload)->senderId;
        uint16_t counter = ((wireless_msg_t*) payload)->counter;

        printfz1("SinkNode: Received message [%u] from node [%u]\n", counter, sender);

        call Leds.set(counter);

        return msg;
    }

    event void AMControl.stopDone(error_t err){
        // pass
    }
}
