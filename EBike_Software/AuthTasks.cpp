#include "AuthTasks.h"
#include <Arduino.h>
#include "Controls.h"
#include "CardReader.h"

AuthTasks* AuthTasks::instance;

String AuthTasks::cardUID;

bool AuthTasks::cardAuth;

AuthTasks* AuthTasks::getInstance(){
  if(instance == 0) instance = new AuthTasks();
}

AuthTasks::AuthTasks(){
  cardUID = "99f6fcb9";
  
  cardAuth = false;
}


bool AuthTasks::isAuthenticated(){
  return cardAuth || Controls::getInstance()->getKey();
}

void AuthTasks::authTaskStart(void*){}

void AuthTasks::authTask(void*){
  
  if(!CardReader::getInstance()->isNewCard()) return;

  if(!CardReader::getInstance()->readCard()) return;
     
  if(CardReader::getInstance()->cardUID().equals(getInstance()->cardUID)) cardAuth = !cardAuth;



}
