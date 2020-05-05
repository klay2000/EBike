#include "LightsTask.h"
#include "Lights.h"
#include "AuthTask.h"
#include "Controls.h"

void LightsTask::lightsTaskStart(void*){
}

void LightsTask::lightsTaskRun(void*){
  if(AuthTask::isAuthenticated() && Controls::getInstance()->getHeadlight())
    Lights::getInstance()->setHeadlight(1);
  else Lights::getInstance()->setHeadlight(0);
  
  
}