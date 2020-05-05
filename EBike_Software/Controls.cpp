#include "Controls.h"
#include <Arduino.h>
#include "IOExpander.h"

Controls* Controls::instance;

Controls::Controls(){
  IOExpander::getInstance()->setPinDir(KEY_PIN, 1);
  IOExpander::getInstance()->setPinDir(HEADLIGHT_PIN, 1);
}

Controls* Controls::getInstance(){
  if(instance == 0){
    instance = new Controls();
  }
  return instance;
}

float Controls::getThrottle(){
  float unconstrained = (analogRead(THROTTLE_PIN) - THROTTLE_MIN)/(float)(THROTTLE_MAX-THROTTLE_MIN);

  if(unconstrained < THROTTLE_DEADBAND) unconstrained = 0.0f;
  
  return constrain(unconstrained, 0.0f, 1.0f);
}

bool Controls::getKey(){
  return !IOExpander::getInstance()->readPin(KEY_PIN);
}

bool Controls::getHeadlight(){
  return !IOExpander::getInstance()->readPin(HEADLIGHT_PIN);
}
