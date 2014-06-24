#ifndef MULTICAST_TOKEN_H
#define MULTICAST_TOKEN_H

#define MT_COLL_ID 39

enum {
	MT_WHITE     = 0b00000001,
	MT_BLACK     = 0b00000010,
    MT_RED       = 0b00000100,
    MT_BLUE      = 0b00001000,
    MT_YELLOW    = 0b00010000,
    MT_GREEN     = 0b00100000,
    MT_GREY      = 0b01000000,
    MT_ORANGE    = 0b10000000
};

typedef uint8_t color_t;
typedef nx_uint8_t nx_color_t;

#endif