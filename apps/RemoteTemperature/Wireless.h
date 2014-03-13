#ifndef WIRELESS_H
#define WIRELESS_H


enum {
	AM_WIRELESS_MSG = 6
};

typedef nx_struct wireless_msg {
	nx_uint16_t senderId;
	nx_uint16_t counter;
} wireless_msg_t;

#endif