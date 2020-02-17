#include <SPI.h>
#include "Screen.h"

Screen* Screen::instance;

Screen::Screen(){

  color = 0;

  spi2 = new SPIClass(2);

  screen = new Adafruit_ILI9341_STM(SCREEN_CS_PIN, SCREEN_DC_PIN);

  screen->begin(*spi2);
}

Screen* Screen::getInstance(){
  if (instance == 0) 
    instance = new Screen();

  return instance;
}

void Screen::setColor(uint16_t color){
  this->color = color;
}

void Screen::fillScreen(){
  screen->fillScreen(color);
}

void Screen::drawLine(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2){
  screen->drawLine(x1, y1, x2, y2, color);
}
