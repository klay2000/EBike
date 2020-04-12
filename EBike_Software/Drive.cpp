#include "Drive.h"
#include "Controls.h"
#include <VescUart.h>

Drive* Drive::instance;

Drive::Drive(){
  Serial2.begin(115200);
  
  ESC.setSerialPort(&Serial2);
}

Drive* Drive::getInstance(){
  if(instance == 0){
    instance = new Drive();
  }
  return instance;
}

float Drive::getAmps(){
  return ESC.data.avgInputCurrent;
}


float Drive::getVolts(){
  return ESC.data.inpVoltage;
}

long Drive::getRPM(){
  return ESC.data.rpm;
}

void Drive::setAmps(float a){
  ESC.setCurrent(constrain(a, 0, MAX_CURRENT));
}
