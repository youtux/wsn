#include "MulticastToken.h"

module MulticastEngineP{
  provides {
    interface StdControl;
    interface MulticastToken;
  }

  uses {
    
  }
}
implementation{
  color_t current_colors = 0;
  command error_t StdControl.start() {
    dbg("MulticastToken", "Started");
    return SUCCESS;
  }

  command error_t StdControl.stop() {
    dbg("MulticastToken", "Stopped");
    return SUCCESS;
  }

  command void MulticastToken.setColors(color_t colors){
    current_colors = colors;
    // Call update
  }

  command void MulticastToken.enableColors(color_t colors){
    current_colors |= colors;
  }

  command void MulticastToken.disableColors(color_t colors){
    current_colors &= ~colors;
  }

  command color_t MulticastToken.enabledColors(){
    return current_colors;
  }
}
