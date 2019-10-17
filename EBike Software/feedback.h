#ifndef FEEDBACK
#define FEEDBACK

#include "Arduino.h"

class Feedback{
  private:
  const int REDPIN = PA10;
  
  const int GREENPIN = PA8;
  
  const int BLUEPIN = PA9;

  const int TRANSITION_TIME = 250;

  int stateSwapTime = 0;

  int redVal = 0;
  int greenVal = 0;
  int blueVal = 0;

  enum State{
    startup,
    transition,
    driving,
    idle,
    other
  };

  State state = startup;
   
  public:
  Feedback();
  
  void flashLED(int r, int g, int b, float rate);
  void flashLED(int r, int g, int b, int times, float rate);
  
  void setLED(int r, int g, int b);

  void transitionLED(int r, int g, int b);
  
  void idleLED();

  void drivingLED(int throttle);

  void updateFeedback();
  
};

#endif
