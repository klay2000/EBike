#ifndef FEEDBACK
#define FEEDBACK

#include "Arduino.h"

class Feedback{
  private:
  const int REDPIN = PA10;
  
  const int GREENPIN = PA8;
  
  const int BLUEPIN = PA9;
   
  public:
  Feedback();
  
  void flashLED(int r, int g, int b, int rate);
  
  void setLED(int r, int g, int b);
  
  void idleLED();

  void runLED(int throttle);
};

#endif
