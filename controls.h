#ifndef CONTROLS
#define CONTROLS

#include "Arduino.h"

class Controls{
  
  private:
  const int KEYPIN = PB8;
  const int THROTTLEPIN = PA5;

  const int THROTTLE_CAL_LOW = 1040;
  const int THROTTLE_CAL_HIGH = 3230;
  
  public:
  Controls();
  
  bool isAuthenticated();

  float getBrakeValue();

  float getThrottleValue();
};

#endif
