#ifndef CONTROLS
#define CONTROLS

#include <Arduino.h>
  
class Controls{

  private:
    const int THROTTLE_PIN = PA5;
    const int STICK_X_PIN = PA6;
    const int STICK_Y_PIN = PA7;
    const int KEY_PIN = PB8;
    const int HEADLIGHT_PIN = -1; //placeholder

    const int THROTTLE_MIN = 1090;
    const int THROTTLE_MAX = 3200;

    const float THROTTLE_DEADBAND = 0.05f;

    const int STICK_X_MIN = 700;
    const int STICK_X_MAX = 3400;

    const int STICK_Y_MIN = 610;
    const int STICK_Y_MAX = 3300;

    const float STICK_DEADBAND = 0.175f;
  
    static Controls* instance;
    Controls();
  

  public:
    static Controls* getInstance();
    float getThrottle();
    float getStickX();
    float getStickY();
    bool getKey();
    bool getHeadlight();
  
};

#endif
