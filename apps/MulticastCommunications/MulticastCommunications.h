#ifndef MULTICAST_COMMUNICATIONS_H
#define MULTICAST_COMMUNICATIONS_H

#define MC_MSG_ID 12
#define MC_UPDATE_PERIOD 60 * 1024

// Colors enumeration
enum {
	MC_WHITE     = 0b00000001,
	MC_BLACK     = 0b00000010,
  MC_RED       = 0b00000100,
  MC_BLUE      = 0b00001000,
  MC_YELLOW    = 0b00010000,
  MC_GREEN     = 0b00100000,
  MC_GREY      = 0b01000000,
  MC_ORANGE    = 0b10000000,
  MC_BROADCAST = 0b11111111
};

typedef uint8_t mc_color_t;
typedef nx_uint8_t nx_mc_color_t;

// Flags enumeration
enum {
  MC_FLAGS_ANYCAST   = 0b00000001,
  MC_FLAGS_DATA      = 0b00000010,
  MC_FLAGS_REBUILD   = 0b00000100,
  MC_FLAGS_UPDATE    = 0b00001000
};

typedef uint8_t mc_flags_t;
typedef nx_uint8_t nx_mc_flags_t;

typedef uint32_t mc_data_t;
typedef nx_uint32_t nx_mc_data_t;

typedef nx_struct nx_mc_msg {
  nx_mc_flags_t flags;
  nx_uint16_t seqno;
  nx_mc_color_t color;
  nx_mc_data_t data;
} nx_mc_msg_t;


#endif