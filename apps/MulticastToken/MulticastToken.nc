#include "MulticastToken.h"

interface MulticastToken
{
  command void setColors(color_t color);

  command void enableColors(color_t color);

  command void disableColors(color_t color);

  command color_t enabledColors();
}