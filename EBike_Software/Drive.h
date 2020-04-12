#include <Arduino.h>
#include <VescUart.h>

#ifndef DRIVE
#define DRIVE

class Drive{
  
  private:

    VescUart ESC;
  
    static Drive* instance;
    Drive();
    
  public:

    static const int MAX_CURRENT = 30.0f;

    static Drive* getInstance();

    void setAmps(float a);

    float getAmps();
    float getVolts();
    long getRPM();
    
    
};

#endif
