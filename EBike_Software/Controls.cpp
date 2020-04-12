#include "Controls.h"
#include <Arduino.h>

Controls* Controls::instance;

Controls::Controls(){
//  pinMode(THROTTLE_PIN, INPUT_ANALOG);
  pinMode(KEY_PIN, INPUT_PULLUP);
  pinMode(HEADLIGHT_PIN, INPUT_PULLUP);
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
  return digitalRead(KEY_PIN)==LOW;
}

bool Controls::getHeadlight(){
  return digitalRead(HEADLIGHT_PIN)==LOW;
}
