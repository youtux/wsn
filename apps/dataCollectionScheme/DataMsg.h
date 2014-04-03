#ifndef DATAMSG_H
#define DATAMSG_H

#include <AM.h>

enum
{
  AM_DATAMSG = 22,
  APP_PERIOD = 5*1024,//=5 seconds
};

typedef nx_struct DataMsg
{
	nx_am_addr_t source;
	nx_uint16_t value;
	nx_uint16_t sequence;
} DataMsg;

#endif
