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

void Lights::setHeadlight(bool i){
  digitalWrite(HEADLIGHT_PIN, i);
}

void Lights::setRed(float i){
  analogWrite(RED_PIN, (int)(i*255));
}

void Lights::setGreen(float i){
  analogWrite(GREEN_PIN, (int)(i*255));
}

void Lights::setBlue(float i){
  analogWrite(BLUE_PIN, (int)(i*255));
}
