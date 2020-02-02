#include <Arduino.h>
#include <VescUart.h>

#ifndef DRIVE
#define DRIVE

class Drive{
  private:
    static const int MAX_CURRENT = 30.0f;

    VescUart ESC;
  
    static Drive* instance;
    Drive();
    
  public:

    static Drive* getInstance();

    static void task();

    void setAmps(float a);

    float getAmps();
    float getVolts();
    long getRPM();
    
    
};

#endif
