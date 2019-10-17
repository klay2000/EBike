#ifndef DRIVETRAIN
#define DRIVETRAIN

#include "Arduino.h"
#include <VescUart.h>

class Drivetrain{
  private:
  const int MAX_CURRENT = 30;

  VescUart UART;
  
  public:
  Drivetrain();

  void setThrottle(float throttle);
  
};

#endif
