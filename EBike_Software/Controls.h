#ifndef CONTROLS
#define CONTROLS

#include <Arduino.h>
  
class Controls{

  private:
    const int THROTTLE_PIN = 34;
    
    //on ioexpander
    const int KEY_PIN = 0;
    const int HEADLIGHT_PIN = 1;

    const int THROTTLE_MIN = 950;
    const int THROTTLE_MAX = 3000;

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
