#include "Controls.h"
#include <Arduino.h>

Controls* Controls::instance;

Controls::Controls(){
  pinMode(THROTTLE_PIN, INPUT_ANALOG);
  pinMode(STICK_X_PIN, INPUT_ANALOG);
  pinMode(STICK_Y_PIN, INPUT_ANALOG);
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

float Controls::getStickX(){
  float unconstrained = (analogRead(STICK_X_PIN) - STICK_X_MIN)/(float)((STICK_X_MAX-STICK_X_MIN)/2)-1;

  if(abs(unconstrained) < STICK_DEADBAND) return 0;
  
  return constrain(unconstrained, -1.0f, 1.0f);
}

float Controls::getStickY(){
  float unconstrained = (analogRead(STICK_Y_PIN) - STICK_Y_MIN)/(float)((STICK_Y_MAX-STICK_Y_MIN)/2)-1;

  if(abs(unconstrained) < STICK_DEADBAND) return 0;
  
  return constrain(unconstrained, -1.0f, 1.0f);
}

bool Controls::getKey(){
  return digitalRead(KEY_PIN)==LOW;
}

bool Controls::getHeadlight(){
  return digitalRead(HEADLIGHT_PIN)==LOW;
}
