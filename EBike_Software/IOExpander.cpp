#include "IOExpander.h"
#include <SPI.h>
#include <Arduino.h>
#include "Bluetooth.h"
#include <math.h>

IOExpander* IOExpander::instance;

IOExpander* IOExpander::getInstance(){
  if(instance == 0){
    instance = new IOExpander();
  }

  return instance;
}

IOExpander::IOExpander(){

  pinMode(CSPin, OUTPUT);
  digitalWrite(CSPin, HIGH);
  SPI.begin();

  SPI.beginTransaction(settings);

  digitalWrite(CSPin, LOW);

  SPI.transfer16((uint16_t)WRITE << 8 | GPPU);
  SPI.transfer16((uint16_t)0xFFFF);

  digitalWrite(CSPin, HIGH);

  SPI.endTransaction();

}

void IOExpander::setPinDir(int pin, int dir){
  if(((pinDirs >> (15-pin)) & 1) != dir){
    dir = (dir * 2) - 1;
    pinDirs += dir*(0x0001 << (15-pin));

    SPI.beginTransaction(settings);

    digitalWrite(CSPin, LOW);

    SPI.transfer16((uint16_t)WRITE << 8 | IODIR);
    SPI.transfer16((uint16_t)pinDirs);

    digitalWrite(CSPin, HIGH);

    SPI.endTransaction();
  }
}

void IOExpander::writePin(int pin, int value){
  if(((pinOutputs >> (15-pin)) & 1) != value){
    value = (value * 2) - 1;
    pinOutputs += value*(0x0001 << (15-pin));
    

    SPI.beginTransaction(settings);

    digitalWrite(CSPin, LOW);

    SPI.transfer16((uint16_t)WRITE << 8 | GPIO);
    SPI.transfer16((uint16_t)pinOutputs);

    digitalWrite(CSPin, HIGH);

    SPI.endTransaction();
  }
}

bool IOExpander::readPin(int pin){
  //only read once per millisecond


    // Bluetooth::getInstance()->debugPrintln(String(pinDirs, BIN));

  if(timeOfLastRead != millis()){
    SPI.beginTransaction(settings);
    digitalWrite(CSPin, LOW);

    SPI.transfer(READ);
    SPI.transfer(GPIO);
    pinInputs = SPI.transfer16(0);

    digitalWrite(CSPin, HIGH);
    SPI.endTransaction();

    timeOfLastRead = millis();
  }

  return (pinInputs >> (15-pin)) & 1; //shift so pin num is in max place and divide by max place

}