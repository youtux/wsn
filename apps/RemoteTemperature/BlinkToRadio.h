#ifndef __BLINK_TO_RADIO_H__
#define __BLINK_TO_RADIO_H__
enum {
	MY_AM_ID = 6
};

typedef nx_struct BlinkToRadioMsg {
	nx_uint16_t senderId;
	nx_uint16_t counter;
} BlinkToRadioMsg;

#endif