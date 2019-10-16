#include "controls.h"
#include "Arduino.h"

Controls::Controls(){
  pinMode(KEYPIN, INPUT_PULLUP);
  pinMode(THROTTLEPIN, INPUT_ANALOG);
}

bool Controls::isAuthenticated(){
  return digitalRead(KEYPIN)==LOW;
}

float Controls::getThrottleValue(){
  return constrain(((analogRead(THROTTLEPIN)-THROTTLE_CAL_LOW)*(1.0f/(THROTTLE_CAL_HIGH-THROTTLE_CAL_LOW)))-0.05, 0.0f, 1.0f);
}

