#include "controls.h"
#include "Arduino.h"

Controls::Controls(){
  pinMode(KEYPIN, INPUT_PULLUP);
}

bool Controls::isAuthenticated(){
  return digitalRead(KEYPIN)==LOW;
}

