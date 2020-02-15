#include "AuthTasks.h"
#include <Arduino.h>
#include "Controls.h"
#include "CardReader.h"

AuthTasks* AuthTasks::instance;

AuthTasks* AuthTasks::getInstance(){
  if(instance == 0) instance = new AuthTasks();
}

AuthTasks::AuthTasks(){
}

bool AuthTasks::isAuthenticated(){
  if(cardAuth == true) return true;
  else return false;
}

void AuthTasks::authTaskStart(){}

void AuthTasks::authTask(){
  if(
    CardReader::getInstance()->isNewCard() &&
    CardReader::getInstance()->isCardRead()&&
    CardReader::getInstance()->cardUID().equals(getInstance()->cardUID)){

//      getInstance()->cardAuth = !getInstance()->cardAuth;

  }
}
