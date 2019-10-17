//#include <VescUart.h>

#include "drivetrain.h"
#include "Arduino.h"

Drivetrain::Drivetrain(){
  Serial2.begin(19200);
  
  while(!Serial2){;}
  UART.setSerialPort(&Serial2);
}

void Drivetrain::setThrottle(float throttle){
  UART.setCurrent(throttle*MAX_CURRENT);
}

