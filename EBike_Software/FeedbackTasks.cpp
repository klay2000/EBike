#include "FeedbackTasks.h"
#include "Drive.h"
#include "Lights.h"

void FeedbackTasks::notificationLightTaskStart(void*){

}

void FeedbackTasks::notificationLightTaskRun(void*){
  if(Drive::getInstance()->getRPM() <= 16600){
    float lightValue = (float)Drive::getInstance()->getRPM()/16500.0f;

    Lights::getInstance()->setRed(lightValue);
    Lights::getInstance()->setBlue(lightValue);
    Lights::getInstance()->setGreen(lightValue);
  }
}