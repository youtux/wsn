#ifndef MULTICAST_TOKEN_H
#define MULTICAST_TOKEN_H

#define MT_MSG_ID 12
#define MT_PERIOD 60 * 1024

enum {
	MT_WHITE     = 0b00000001,
	MT_BLACK     = 0b00000010,
  MT_RED       = 0b00000100,
  MT_BLUE      = 0b00001000,
  MT_YELLOW    = 0b00010000,
  MT_GREEN     = 0b00100000,
  MT_GREY      = 0b01000000,
  MT_ORANGE    = 0b10000000,
  MT_BROADCAST = 0b11111111
};

typedef uint8_t color_t;
typedef nx_uint8_t nx_color_t;

enum {
  MT_FLAGS_ANYCAST   = 0b00000001,
  MT_FLAGS_DATA      = 0b00000010,
  MT_FLAGS_REBUILD   = 0b00000100,
  MT_FLAGS_UPDATE    = 0b00001000
};

typedef uint8_t mt_flags_t;
typedef nx_uint8_t nx_mt_flags_t;

typedef uint16_t mt_data_t;
typedef nx_uint16_t nx_mt_data_t;

typedef nx_struct nx_mt_data {
  nx_mt_flags_t flags;
  nx_uint8_t seqno;
  nx_color_t color;
  nx_mt_data_t data;
} nx_mt_msg_t;


#endif