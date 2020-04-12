#include "Controls.h"
#include "Drive.h"
#include "Scheduler.h"
#include "CardReader.h"
#include "AuthTasks.h"
#include "DriveTasks.h"

bool t = true;
Controls* i;
Drive* d;
CardReader* c;
AuthTasks* at;
static void testTaskStart(void*){
//    pinMode(PA10, OUTPUT);
}

static void testTask(void*)
{
//    Serial.println(CardReader::getInstance()->cardUID());
//  Serial.println(AuthTasks::getInstance()->isAuthenticated());
//  Serial.println(CardReader::getInstance()->isNewCard());
//  if(CardReader::getInstance()->isNewCard())
//    Serial.println(CardReader::getInstance()->readCard());
//  Serial.println(CardReader::getInstance()->cardUID());
//  t = !t;
//  if(AuthTasks::getInstance()->isAuthenticated()) digitalWrite(PA10, HIGH);
//  else  digitalWrite(PA10, LOW);



    Serial.println(Controls::getInstance()->getThrottle());
}

Scheduler* scheduler;

void setup()
{
  i = Controls::getInstance();

  d = Drive::getInstance();

  c = CardReader::getInstance();

  at = AuthTasks::getInstance();
      
  scheduler = Scheduler::getInstance();

  Serial.begin(115200);

  scheduler->addTask(new Task(&testTaskStart, &testTask, 10));
  scheduler->addTask(new Task(&AuthTasks::authTaskStart, &AuthTasks::authTask, 100));
  scheduler->addTask(new Task(&DriveTasks::throttleTaskStart, &DriveTasks::throttleTask, 10));
}

void loop()
{
  scheduler->tick();
}
