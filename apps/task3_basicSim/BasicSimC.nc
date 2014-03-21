#include "BasicSim.h" 

module BasicSimC {
    uses {

        interface Boot;
        // TODO: Interfaces for sending over the radio and also wire them to components in BasicSimAppC.nc
        interface SplitControl as RadioControl;
        interface AMSend;
        interface Receive;
        interface Packet;
    }
}

implementation {
    message_t packet;
    bool sending;

    event void Boot.booted() {
        call RadioControl.start();
    }

    event void RadioControl.startDone(error_t err) {
        if (err == SUCCESS){
            if (TOS_NODE_ID == 0 && !sending){
            radio_msg_t* msgPayload = (radio_msg_t*) (call Packet.getPayload(&packet, sizeof(radio_msg_t)));

            msgPayload->hopcount = 0;

            if (call AMSend.send(AM_BROADCAST_ADDR, &packet, sizeof(radio_msg_t)) == SUCCESS){
                sending = TRUE;
            }
        }
        }else{
            call RadioControl.start();
        }
    }

    
    event void AMSend.sendDone(message_t* bufPtr, error_t error) {
        if (&packet == bufPtr)
            sending = FALSE;
    }

    event message_t* Receive.receive(message_t* bufPtr, void* payload, uint8_t len) {
        uint16_t hopcount = ((radio_msg_t*) payload)->hopcount;

        dbg("stdout", "Received packet with hopcount = [%d]\n", hopcount);

        //TODO : Rebroadcast the message

        if (!sending){
            radio_msg_t* msgPayload = (radio_msg_t*) (call Packet.getPayload(&packet, sizeof(radio_msg_t)));

            msgPayload->hopcount = hopcount + 1;

            if (call AMSend.send(AM_BROADCAST_ADDR, &packet, sizeof(radio_msg_t)) == SUCCESS){
                sending = TRUE;
            }
        }

        return bufPtr;
    }

    event void RadioControl.stopDone(error_t err) {
    
    }

}
