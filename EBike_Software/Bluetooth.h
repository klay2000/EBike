#ifndef BLUETOOTH
#define BLUETOOTH

#include<BluetoothSerial.h>

class Bluetooth{
  private:
  Bluetooth();
  static Bluetooth* instance;
  const bool DEBUG = true;
  const char* deviceName = "EBike Bluetooth";
  BluetoothSerial* btSerial;

  public:
  static Bluetooth* getInstance();
  void debugPrint(String data);
  void debugPrintln(String data);

};

#endif
