#include "DriveTasks.h"
#include <Arduino.h>
#include "AuthTasks.h"
#include "Drive.h"
#include "Controls.h"

DriveTasks* DriveTasks::instance;

DriveTasks* DriveTasks::getInstance(){
  if(instance == 0) instance = new DriveTasks();

  return instance;
}

DriveTasks::DriveTasks(){

}

void DriveTasks::throttleTaskStart(void*){

}

void DriveTasks::throttleTask(void*){
  float amps = 0.0f;
  if(AuthTasks::getInstance()->isAuthenticated()) amps = Controls::getInstance()->getThrottle()*Drive::MAX_CURRENT;
  Drive::getInstance()->setAmps(amps);
}
