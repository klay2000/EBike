#ifndef CONTROLS
#define CONTROLS

#include <Arduino.h>
  
class Controls{

  private:
    const int THROTTLE_PIN = 34;
    //key pin needs switch to ioexpander
    const int KEY_PIN = -1;
    const int HEADLIGHT_PIN = -1; //placeholder

    const int THROTTLE_MIN = 1090;
    const int THROTTLE_MAX = 3200;

    const float THROTTLE_DEADBAND = 0.05f;

    static Controls* instance;
    Controls();
  

  public:
    static Controls* getInstance();
    float getThrottle();
    bool getKey();
    bool getHeadlight();
  
};

#endif
