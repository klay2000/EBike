#include <SPI.h>
#include "Screen.h"

Screen* Screen::instance;

Screen::Screen(){
  spi2 = new SPIClass(SCREEN_SPI);

  screen = new Adafruit_ILI9341_STM(SCREEN_CS_PIN, SCREEN_DC_PIN);

  screen->begin(*spi2);
}

Screen* Screen::getInstance(){
  if (instance == 0)
  {
    instance = new Screen();
  }

  return instance;
}

void Screen::fillScreen(uint16_t color){

  screen->fillScreen(color);
}
