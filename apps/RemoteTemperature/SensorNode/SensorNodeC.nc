#include "../Wireless.h"
#include "printfZ1.h"
#include "Timer.h"


module SensorNodeC {
    uses {
        interface Leds;
        interface Boot;

        interface Timer<TMilli> as ReadTimer;
        interface Read<uint16_t> as TemperatureRead;

        // Radio interfaces
        interface SplitControl as AMControl;
        interface Packet;
        interface AMSend;
    }
}

implementation {
    message_t packet;
    bool sending;

    event void Boot.booted() {
        printfz1_init();

        printfz1("SensorNode: boot\n");

        // Init the Radio
        call AMControl.start();
    }

    event void AMControl.startDone(error_t err){
        if (err == SUCCESS){
            printfz1("SensorNode: Radio ON!\n");

            // Start the reading timer
            call ReadTimer.startPeriodic(1000);
        }
        else
            call AMControl.start();
    }

    event void ReadTimer.fired() {
        call TemperatureRead.read();
    }

    event void TemperatureRead.readDone(error_t result, uint16_t val){

        am_addr_t dst = AM_BROADCAST_ADDR;
        // am_addr_t dst = 2;
        // Remember: val is the temperature in °C multiplied by 10 (dec)
        printfz1("SensorNode: Temperature is [%d].\n", val/16);

        if (!sending){
            wireless_msg_t* msgPayload = (wireless_msg_t*) (call Packet.getPayload(&packet, sizeof(wireless_msg_t)));

            msgPayload->senderId = 1;
            msgPayload->data = val;

            if (call AMSend.send(dst, &packet, sizeof(wireless_msg_t)) == SUCCESS){
                printfz1("SensorNode: Sending message [%u] to [%u]\n", val, dst);
                sending = TRUE;
            }
        }
    }

    event void AMSend.sendDone(message_t* msg, error_t error){
        if (&packet == msg){
            sending = FALSE;
            printfz1("SensorNode: \tMessage sent.\n");
        }
    }

    event void AMControl.stopDone(error_t err){
        printfz1("SensorNode: Radio OFF!\n");
    }
}
