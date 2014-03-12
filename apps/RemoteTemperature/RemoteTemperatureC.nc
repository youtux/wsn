#include "BlinkToRadio.h"
#include "printfZ1.h"
#include "Timer.h"

module RemoteTemperatureC {
    uses {
        interface Timer<TMilli> as BlinkTimer;
        interface Leds;
        interface Boot;

        interface SplitControl as AMControl;
        interface Packet;
        interface AMSend;
        interface Receive;
    }
}

implementation {
    message_t blinkMsg;
    uint16_t counter;
    bool busy;

    event void Boot.booted() {
        call AMControl.start();
    }

    event void AMControl.startDone(error_t err){
        printfz1("Trying to turn the radio on.\n");
        if (err == SUCCESS){
            printfz1("Radio ON!\n");
            call Leds.led0On();

            call BlinkTimer.startPeriodic(1000);
        }
        else
            call AMControl.start();
    }

    event void BlinkTimer.fired() {
        counter ++;
        if (!busy){
            BlinkToRadioMsg* msgPayload = (BlinkToRadioMsg*) (call Packet.getPayload(&blinkMsg, (uint8_t) 0));

            msgPayload->counter = counter;

            if (call AMSend.send(AM_BROADCAST_ADDR, &blinkMsg, sizeof(BlinkToRadioMsg)) == SUCCESS){
                printfz1("Sent correctly\n");
                busy = TRUE;
            }
            
        }
        //call TempRead.read();
    }

    event void AMSend.sendDone(message_t* msg, error_t error){
        if (&blinkMsg == msg)
            busy = FALSE;
    }

    event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len){
        call Leds.set(((BlinkToRadioMsg*) payload)->counter);
        return msg;
    }

    event void AMControl.stopDone(error_t err){
        // pass
    }
}
