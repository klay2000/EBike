#include "Drive.h"
#include "Controls.h"
#include <VescUart.h>
#include <Arduino.h>
#include "Bluetooth.h"

Drive* Drive::instance;

Drive::Drive(){
  Serial1.begin(115200);
  while(!Serial1);
   
  ESC.setSerialPort(&Serial1);
  ESC.setDebugPort(&Serial);

//temporary ppm
//  ledcAttachPin(17, 4);
//  ledcSetup(4, 50, 10);
}

Drive* Drive::getInstance(){
  if(instance == 0){
    instance = new Drive();
  }
  return instance;
}

float Drive::getAmps(){
//  if(ESC.getVescValues())
    return ESC.data.avgInputCurrent;
}


float Drive::getVolts(){
  if(ESC.getVescValues());
    return ESC.data.inpVoltage;
}

long Drive::getRPM(){
//  if(ESC.getVescValues());
    return ESC.data.rpm;
}

void Drive::setAmps(float a){
  ESC.setCurrent(constrain(a, 0, MAX_CURRENT));
  //temporary ppm
//  ledcWrite(4, constrain((a/MAX_CURRENT)*1023, 10, 1000)); 
  Bluetooth::getInstance()->debugPrintln(String(getVolts()));
//  Bluetooth::getInstance()->debugPrintln(String(ledcRead(4)));
}
