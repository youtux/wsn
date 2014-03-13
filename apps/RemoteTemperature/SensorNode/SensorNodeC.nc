#include "../Wireless.h"
#include "printfZ1.h"
#include "Timer.h"

#include "UserButton.h"

module SensorNodeC {
    uses {
        interface Timer<TMilli> as BlinkTimer;
        interface Leds;
        interface Boot;

        interface Notify<button_state_t> as Button;

        interface SplitControl as AMControl;
        interface Packet;
        interface AMSend;
    }
}

implementation {
    message_t blinkMsg;
    uint16_t counter;
    bool busy;

    event void Boot.booted() {
        call Leds.led0On();

        call Button.enable();

        printfz1_init();
        printfz1("SensorNode: boot\n");
        call AMControl.start();
    }

    event void AMControl.startDone(error_t err){
        if (err == SUCCESS){
            printfz1("SensorNode: Radio ON!\n");
            printfz1("SinkNode: Push da button!!!\n");
            call BlinkTimer.startPeriodic(1000);
        }
        else
            call AMControl.start();
    }

    event void Button.notify(button_state_t val) {
        if(val != BUTTON_RELEASED) {
            return;
        }

        counter ++;
        if (!busy){
            wireless_msg_t* msgPayload = (wireless_msg_t*) (call Packet.getPayload(&blinkMsg, (uint8_t) 0));

            msgPayload->senderId=1;
            msgPayload->counter = counter;

            if (call AMSend.send(AM_BROADCAST_ADDR, &blinkMsg, sizeof(wireless_msg_t)) == SUCCESS){
                printfz1("SensorNode: Message [%d] sent correctly\n", counter);
                busy = TRUE;
            }
            
        }
    }

    event void BlinkTimer.fired() {


        return;








        counter ++;
        if (!busy){
            wireless_msg_t* msgPayload = (wireless_msg_t*) (call Packet.getPayload(&blinkMsg, (uint8_t) 0));

            msgPayload->senderId=1;
            msgPayload->counter = counter;

            if (call AMSend.send(AM_BROADCAST_ADDR, &blinkMsg, sizeof(wireless_msg_t)) == SUCCESS){
                printfz1("SensorNode: Message [%d] sent correctly\n", counter);
                busy = TRUE;
            }
            
        }
        //call TempRead.read();
    }

    event void AMSend.sendDone(message_t* msg, error_t error){
        if (&blinkMsg == msg)
            busy = FALSE;
    }

    event void AMControl.stopDone(error_t err){
        // pass
    }
}
