#include <Arduino.h>
#include <VescUart.h>

#ifndef DRIVE
#define DRIVE

class Drive{
  private:
    static const int MAX_CURRENT = 30;

    static VescUart ESC;
  
    static Drive* instance;
    Drive();
    
  public:

    static Drive* getInstance();

    static void vDriveTask(void* pvParameters);

    float getAmps();
    float getVolts();
    long getRPM();
    
    
};

#endif
