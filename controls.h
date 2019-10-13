#ifndef CONTROLS
#define CONTROLS

#include "Arduino.h"

class Controls{
  
  private:
  const int KEYPIN = PB8;
  
  public:
  Controls();
  
  bool isAuthenticated();

  int getBrakeValue();

  int getThrottleValue();
};

#endif
