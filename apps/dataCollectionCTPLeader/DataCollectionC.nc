#include <Timer.h>

#include "LeaderElection.h"

#ifdef TOSSIM
  #define ulog(streamID, format, ...)  dbg(streamID, "%s: " format "\n", sim_time_string(), ##__VA_ARGS__)
#else
  #define ulog(streamID, format, ...)
#endif

#define PERIOD 5 * 1024
#define SHUTDOWN_TIMEOUT 10 * 1024

module DataCollectionC
{
  uses{
    interface Boot;

    interface Read<uint16_t> as TempRead;
    interface Timer<TMilli> as TimerDataCollection;
    interface Timer<TMilli> as LeaderElectionTimer;
    interface Timer<TMilli> as SinkTimeout;
    interface Random;

    interface SplitControl as RadioControl;
    interface StdControl as RoutingControl;
    interface RootControl;
    interface Send;
    interface Receive;
    interface CtpInfo;
    interface PacketAcknowledgements as PacketAck;

    interface AMSend as LeaderElectionSend;
    interface Receive as LeaderElectionReceive;
  }
}
implementation
{
  message_t packet;
  message_t leader_election_pkt;
  bool sending = FALSE;
  bool leaderElectionSending = FALSE;
  bool leaderElectionAlreadyBroadcasted = FALSE;

  typedef nx_struct TemperatureCollectionMsg {
    nx_am_addr_t source;
    nx_uint16_t value;
  } TemperatureCollectionMsg;

  am_addr_t root = 0; // initially the root is the node # 0
  am_addr_t candidate;

  task void LeaderElectionSendBroadcast();
  task void initLeaderElection();

  event void Boot.booted() {
    call RadioControl.start();
  }

  event void RadioControl.startDone(error_t error) {
    if (error != SUCCESS)
      call RadioControl.start();
    else {
      call RoutingControl.start();
      if (TOS_NODE_ID == 0){
        call RootControl.setRoot();
        call SinkTimeout.startOneShot(SHUTDOWN_TIMEOUT);
      }
      else{
        call TimerDataCollection.startPeriodic(PERIOD);
      }
    }
  }

  event void SinkTimeout.fired() {
    call RadioControl.stop();
    call TimerDataCollection.stop();
    ulog("leaderElection", "--------------- I'm dead! ----------------");
  }

  event void TimerDataCollection.fired() {
    //ulog("collection", "TimerDataCollection fired!");
    call TempRead.read();
  }

  event void TempRead.readDone(error_t result, uint16_t val){
    uint16_t tempValue;
    TemperatureCollectionMsg* payload;

    am_addr_t parent;
    call CtpInfo.getParent(&parent);
    ulog("collection", "My parent is: %d", parent);

#ifndef TOSSIM
    tempValue = val / 16;
#else
    //tempValue = val;
    tempValue = call Random.rand16();
#endif
    payload = (TemperatureCollectionMsg *) call Send.getPayload(&packet, sizeof(TemperatureCollectionMsg));
    payload->source = TOS_NODE_ID;
    payload->value = tempValue;

    if (sending)
      return;
    if (call Send.send(&packet, sizeof(TemperatureCollectionMsg)) == SUCCESS){
      sending = TRUE;
      //ulog("collection", "Sending value %d", payload->value);
    }
  }

  event void Send.sendDone(message_t* msg, error_t error) {
    sending = FALSE;
    if (error != SUCCESS){
      am_addr_t parent;
      call CtpInfo.getParent(&parent);
      ulog("collection", "Error while sending the message. My parent is %d", parent);

      if (parent == root){
        post initLeaderElection();
      }
    }
  }

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {
    TemperatureCollectionMsg* p = (TemperatureCollectionMsg *) payload;
    dbg("collection", "%s: Received message [source=%d, value=%d].\n", sim_time_string(), p->source, p->value);
    return msg;
  }

  task void initLeaderElection(){
    ulog("leaderElection", "Initializing leader election.");

    call TimerDataCollection.stop();
    call LeaderElectionTimer.startOneShot(LEADER_ELECTION_TIMEOUT);

    candidate = TOS_NODE_ID;
    
    post LeaderElectionSendBroadcast();
  }

  task void LeaderElectionSendBroadcast()
  {
    leader_election_t* payload = (leader_election_t*) (call LeaderElectionSend.getPayload(&leader_election_pkt, sizeof(leader_election_t)));

    payload->candidate = candidate;
    if (call LeaderElectionSend.send(AM_BROADCAST_ADDR, &leader_election_pkt, sizeof(leader_election_t)) == SUCCESS){
      leaderElectionSending = TRUE;
      ulog("leaderElection", "New candidate [%d] broadcasted.", candidate); // some useful debug maybe
    }
  }

  event void LeaderElectionSend.sendDone(message_t* msg, error_t error)
  {
    if (&leader_election_pkt == msg){
      if (error == SUCCESS){
        //dbg("routing", "NOTIFICATION SENT at %s\n", sim_time_string());
        //ulog("leaderElection", "New candidate [%d] broadcasted.", candidate); // some useful debug maybe
        leaderElectionAlreadyBroadcasted = TRUE;
      }
    }
    leaderElectionSending = FALSE;
  }

  event message_t* LeaderElectionReceive.receive(message_t* msg, void* payload, uint8_t len) {
    bool changedCandidate = FALSE;
    am_addr_t receivedCandidate = ((leader_election_t*) payload)->candidate;
    ulog("leaderElection", "Received candidate [%d]", receivedCandidate);

    if (! call LeaderElectionTimer.isRunning()){
      ulog("leaderElection", "Now in leader election mode.");
      call LeaderElectionTimer.startOneShot(LEADER_ELECTION_TIMEOUT);
      call TimerDataCollection.stop();
    }
    //TODO: add sequence check
    if (! leaderElectionAlreadyBroadcasted){
      candidate = receivedCandidate;
    }
    if (receivedCandidate < candidate) {
      candidate = receivedCandidate;
      changedCandidate = TRUE;
    }
    if ( ! leaderElectionAlreadyBroadcasted || changedCandidate)
      post LeaderElectionSendBroadcast();

    return msg;
  }

  event void LeaderElectionTimer.fired(){ // 5000 ms
    //dbg("leaderElection", "Timer fired.");
    root = candidate;
    ulog("leaderElection", "Timer fired. Elected %d", root);
    leaderElectionAlreadyBroadcasted = FALSE;
    if (root == TOS_NODE_ID) {
      call RootControl.setRoot();
      call TimerDataCollection.stop();
      call SinkTimeout.startOneShot(SHUTDOWN_TIMEOUT);
    } else {
      call TimerDataCollection.startPeriodic(PERIOD);
    }
  }

  event void RadioControl.stopDone(error_t error) {}
}
