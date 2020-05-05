#ifndef IOEXPANDER
#define IOEXPANDER
#include <SPI.h>
#include <Arduino.h>

class IOExpander{
  private:
  IOExpander();
  static IOExpander* instance;
  int CSPin = 32;
  long timeOfLastRead = -1;
  const uint8_t READ = 0b01000001;
  const uint8_t WRITE = 0b01000000;
  const uint8_t GPPU = 0x0C; //All pins are pulled up.
  const uint8_t IODIR = 0x00;
  const uint8_t GPIO = 0x12;
  SPISettings settings = SPISettings(1000, MSBFIRST, SPI_MODE0);

  public:
  static IOExpander* getInstance();
  void setPinDir(int pin, int dir);
  void writePin(int pin, int value);
  bool readPin(int pin);
  uint16_t pinDirs = 0xFFFF; //input = 1, output = 0
  uint16_t pinOutputs = 0; //Ignored for inputs.
  uint16_t pinInputs = 0;

};

#endif