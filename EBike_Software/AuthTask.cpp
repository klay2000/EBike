#include "AuthTask.h"
#include <Arduino.h>
#include "Controls.h"
#include "CardReader.h"

String AuthTask::cardUID = "your-UID";

bool AuthTask::cardAuth = false;


bool AuthTask::isAuthenticated(){
  return cardAuth || Controls::getInstance()->getKey();
}

void AuthTask::authTaskStart(void*){}

void AuthTask::authTaskRun(void*){
  
  if(Controls::getInstance()->getKey()){ //kill cardauth if keyauth
    cardAuth = false;
    return;
  }

 if(!CardReader::getInstance()->isNewCard()) return;

 if(!CardReader::getInstance()->readCard()) return;
     
 if(CardReader::getInstance()->cardUID().equals(cardUID)) cardAuth = !cardAuth;



}
