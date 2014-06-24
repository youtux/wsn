#include "MulticastToken.h"

module ColorManagerP{
  provides {
    interface ColorManager;
  }
}
implementation{
  color_t current_colors;
  command void setColors(color_t colors){
    current_colors = colors;
    // Call update
  }

  command void enableColors(color_t colors){
    current_colors |= colors;
  }

  command void disableColors(color_t colors){
    current_colors &= ~colors;
  }

  command color_t enabledColors(){
    return current_colors;
  }
}