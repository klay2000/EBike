#include <MapleFreeRTOS900.h>
#include "Controls.h"
#include "Drive.h"

static void vTestTask(void* pvParameters){

  Controls* i = Controls::getInstance();
  
  while(true){
    Serial.println("Throttle: " + String(i->getThrottle()) + "\nX: " + String(i->getStickX()) + "\nY: " + String(i->getStickY()));
  }
}

void setup() {
  Serial.begin(115200);
  while(!Serial){;}
  Serial.println("Starting up.");
  
  xTaskCreate(vTestTask,
  "TestTask",
  configMINIMAL_STACK_SIZE,
  NULL,
  tskIDLE_PRIORITY + 2,
  NULL);
  
  xTaskCreate(Drive::vDriveTask,
  "DriveTask",
  configMINIMAL_STACK_SIZE,
  NULL,
  tskIDLE_PRIORITY + 2,
  NULL);
  
  vTaskStartScheduler();
}

void loop() {
}
