#include "DriveTasks.h"
#include <Arduino.h>
#include "AuthTask.h"
#include "Drive.h"
#include "Controls.h"

void DriveTasks::throttleTaskStart(void*){

}

void DriveTasks::throttleTask(void*){
  float amps = 0.0f;
  if(AuthTask::isAuthenticated()) amps = Controls::getInstance()->getThrottle()*Drive::MAX_CURRENT;
  Drive::getInstance()->setAmps(amps);
}
