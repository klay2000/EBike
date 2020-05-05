#include <Arduino.h>
#include "Lights.h"
#include "Bluetooth.h"
#include "IOExpander.h"

Lights* Lights::instance;

Lights::Lights(){

  ledcSetup(RED_CH, LED_FREQ, LED_RES);
  ledcAttachPin(RED_PIN, RED_CH);

  ledcSetup(GREEN_CH, LED_FREQ, LED_RES);
  ledcAttachPin(GREEN_PIN, GREEN_CH);

  ledcSetup(BLUE_CH, LED_FREQ, LED_RES);
  ledcAttachPin(BLUE_PIN, BLUE_CH);

  IOExpander::getInstance()->setPinDir(HEADLIGHT_PIN, 0);
}

Lights* Lights::getInstance(){
  if(instance == 0){
    instance = new Lights();
  }

  return instance;
}

void Lights::setHeadlight(bool i){
  IOExpander::getInstance()->writePin(HEADLIGHT_PIN, i);
}

void Lights::setRed(float i){
  ledcWrite(RED_CH, (int)(i*1024));
}

void Lights::setGreen(float i){
  ledcWrite(GREEN_CH, (int)(i*1024));
}

void Lights::setBlue(float i){
  ledcWrite(BLUE_CH, (int)(i*1024));
}
