#include "MulticastToken.h"

#ifdef TOSSIM
  #define ulog(streamID, format, ...)  dbg(streamID, "%s: " format "\n", sim_time_string(), ##__VA_ARGS__)
#else
  #define ulog(streamID, format, ...)
#endif

module MulticastTokenC {
  uses{
    interface Boot;

    interface Timer<TMilli> as TimerUpdateColors;

    interface SplitControl as RadioControl;
    interface StdControl as RoutingControl;
    interface RootControl;
    interface Send;
    interface Receive;

  }
}

implementation {
  color_t current_colors = 0;

  void enableColors(color_t colors){
    current_colors |= colors;
  }

  void disableColors(color_t colors){
    current_colors &= ~colors;
  }

  event void Boot.booted() {
    if (TOS_NODE_ID == 0)
      current_colors = MT_WHITE;
    else
      current_colors = TOS_NODE_ID;

    ulog("MulticastToken", "Colors enabled: %u", current_colors);

    call RadioControl.start();
  }

  event void RadioControl.startDone(error_t error) {
    if (error != SUCCESS)
      call RadioControl.start();
    else {
      call RoutingControl.start();
      if (TOS_NODE_ID == 0) 
        call RootControl.setRoot();
      else
        call TimerUpdateColors.startPeriodic(MT_PERIOD);
    }
  }

  event void TimerUpdateColors.fired() {
    //THINGS
  }

  task void updateColors(){
    return ;
  }

  event void Send.sendDone(message_t* msg, error_t error) {

  }

  event message_t* Receive.receive(message_t* msg, void* payload, uint8_t len) {

    return msg;
  }

  event void RadioControl.stopDone(error_t error) {}



}