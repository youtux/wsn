#ifndef TREEBUILDING_H
#define TREEBUILDING_H

enum
{
  AM_TREEBUILDING = 33,
  REBUILD_PERIOD = 1024, //an exact second because in Nesc 1024 ticks per second 
};

// Remember: message size bounded to 29 bytes
typedef nx_struct tree_building
{
  nx_uint8_t hopcount;
  nx_uint16_t batteryLevel;
  nx_uint16_t seq;
} tree_building_t;

typedef struct packet_quality
{
  uint8_t hopcount;
  uint8_t rssi;
  uint16_t batteryLevel;
} packet_quality_t;

#endif
