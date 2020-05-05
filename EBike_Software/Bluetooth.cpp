#include "Bluetooth.h"
#include <BluetoothSerial.h>

Bluetooth::Bluetooth(){
}

Bluetooth* Bluetooth::instance;

Bluetooth* Bluetooth::getInstance(){
  if(instance == 0){
    instance = new Bluetooth();
    instance->btSerial = new BluetoothSerial(); //I'm doing this here because for some reason it won't work in the constructor.
    instance->btSerial->begin(instance->deviceName);
  }

  return instance;
}

void Bluetooth::debugPrint(String data){
   if(DEBUG && btSerial->isReady()){
    btSerial->print("DEBUG: ");
    btSerial->print(data);
   }
}

void Bluetooth::debugPrintln(String data){
  if(DEBUG && btSerial->isReady()){
    btSerial->print("DEBUG: ");
    btSerial->println(data);
  }
}
