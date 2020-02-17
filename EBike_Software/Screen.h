#include <Adafruit_ILI9341_STM.h>
#include <License.h>

#ifndef SCREEN
#define SCREEN

class Screen
{

private:
  const int SCREEN_DC_PIN = PB4;
  const int SCREEN_CS_PIN = PB3;
  const int SCREEN_SPI = 2;

  uint16_t color;

  SPIClass* spi2;

  Adafruit_ILI9341_STM* screen;

  static Screen* instance;

  Screen();

public:
  static Screen* getInstance();

  void fillScreen();

  void setColor(uint16_t color);

  void drawLine(uint16_t x1, uint16_t y1, uint16_t x2, uint16_t y2);

};
#endif
