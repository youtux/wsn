#ifndef LEADERELECTION_H
#define LEADERELECTION_H

enum
{
  AM_LEADER_ELECTION= 33,
  LEADER_ELECTION_TIMEOUT = 1 * 1024
};

// Remember: message size bounded to 29 bytes
typedef nx_struct leader_election
{
	nx_uint16_t candidate;
	nx_uint16_t sequence;
} leader_election_t;

#endif
