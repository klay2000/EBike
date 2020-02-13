#include <Arduino.h>
#include "Lights.h"

Lights* Lights::instance;

Lights::Lights(){
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  pinMode(HEADLIGHT_PIN, OUTPUT);
}

Lights* Lights::getInstance(){
  if(instance == 0){
    instance = new Lights();
  }

  return instance;
}

