#include "TreeBuilding.h"

configuration TreeRoutingC
{
  provides interface TreeConnection;
}
implementation
{
  components MainC, TreeRoutingP, ActiveMessageC, LedsC;
  components new TimerMilliC() as Timer0;
  components new TimerMilliC() as Timer1;
  components new AMSenderC(AM_TREEBUILDING);
  components new AMReceiverC(AM_TREEBUILDING);
  components RandomC;
#ifndef TOSSIM
  components new VoltageC() as ReadVoltage;
  components CC2420PacketC;
  TreeRoutingP.CC2420Packet -> CC2420PacketC;
#else
  components new DemoSensorC() as ReadVoltage;
  components TossimActiveMessageC;
  TreeRoutingP.TossimPacket -> TossimActiveMessageC;
#endif

  TreeConnection = TreeRoutingP.TreeConnection;
  
  TreeRoutingP -> MainC.Boot;
  TreeRoutingP.TimerNotification -> Timer0;
  TreeRoutingP.TimerRefresh -> Timer1;
  TreeRoutingP.Leds -> LedsC;
  TreeRoutingP.Packet -> AMSenderC;
  TreeRoutingP.AMPacket -> ActiveMessageC;
  TreeRoutingP.AMSend -> AMSenderC;
  TreeRoutingP.AMControl -> ActiveMessageC;
  TreeRoutingP.Receive -> AMReceiverC;
  TreeRoutingP.ReadVoltage -> ReadVoltage;
  TreeRoutingP.Random -> RandomC;
}

