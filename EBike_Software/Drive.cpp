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
  if(ESC.getVescValues())
    return ESC.data.avgInputCurrent;
}


float Drive::getVolts(){
  if(ESC.getVescValues())
    return ESC.data.inpVoltage;
}

long Drive::getRPM(){
  if(ESC.getVescValues())
    return ESC.data.rpm;
}

void Drive::setAmps(float a){
  ESC.setCurrent(constrain(a, 0, MAX_CURRENT));
}
