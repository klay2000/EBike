#include "Drive.h"
#include "Controls.h"
#include <VescUart.h>

Drive* Drive::instance;

Drive::Drive(){
  Serial2.begin(19200);
  
  while(!Serial2){;}
  
  ESC.setSerialPort(&Serial2);
}

Drive* Drive::getInstance(){
  if(instance == 0){
    instance = new Drive();
  }
  return instance;
}

void Drive::vDriveTask(void* pvParameters){
    Drive* thisInstance = getInstance();
    Controls* controls = Controls::getInstance();
    
    while(true){
      thisInstance->ESC.setCurrent(controls->getThrottle()*MAX_CURRENT);
    }
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
