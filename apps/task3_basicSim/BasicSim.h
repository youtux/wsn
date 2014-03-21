#ifndef BASIC_SIM_H
#define BASIC_SIM_H


typedef nx_struct radio_msg {
  nx_uint16_t hopcount;
} radio_msg_t;

enum {
  AM_RADIO_MSG = 6,
};

#endif

