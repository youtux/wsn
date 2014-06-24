#include "MulticastToken.h"

configuration MulticastTokenC{
  provides {
    interface MulticastToken;
    interface StdControl;
    // interface Send[uint8_t client];
    // interface Receive;
    // interface Receive as Snoop[collection_id_t];
    // interface Intercept[collection_id_t id];

    // interface Packet;
    // interface CollectionPacket;
    // interface CtpPacket;

    // interface CtpInfo;
    // interface CtpCongestion;
    // interface RootControl;    
  }
}

implementation {
  components MulticastEngineP;
  components ActiveMessageC;
  components new CollectionSenderC(MT_COLL_ID);
  components CollectionC;

  StdControl = MulticastEngineP;
  MulticastToken = MulticastEngineP;


  App.RadioControl -> ActiveMessageC;
  App.RoutingControl -> CollectionC.StdControl;
  App.RootControl -> CollectionC.RootControl;
  App.Send -> CollectionSenderC;
  App.Receive -> CollectionC.Receive[COLL_ID];
}