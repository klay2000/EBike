#include "UITasks.h"

UITasks* UITasks::instance;

UITasks* UITasks::getInstance(){
  if(instance == 0) instance = new UITasks();
  return instance;
}

UITasks::UITasks(){
  
}
