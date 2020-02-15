#include "Controls.h"
#include "Drive.h"
#include "Scheduler.h"
#include "Screen.h"
#include "CardReader.h"
#include "AuthTasks.h"

bool t = true;
Controls* i;
Drive* d;
CardReader* c;
static void testTaskStart(){
    pinMode(PA10, OUTPUT);
}

static void testTask()
{

  Serial.println(AuthTasks::getInstance()->isAuthenticated()&&0x01);
//  t = !t;
//  if(AuthTasks::getInstance()->isAuthenticated()) digitalWrite(PA10, HIGH);
//  else  digitalWrite(PA10, LOW);
}

Scheduler* scheduler;

void setup()
{
  i = Controls::getInstance();

  d = Drive::getInstance();

  c = CardReader::getInstance();
      
  scheduler = Scheduler::getInstance();

  Serial.begin(115200);

  scheduler->addTask(new Task(&testTaskStart, &testTask, 100));
  scheduler->addTask(new Task(&AuthTasks::authTaskStart, &AuthTasks::authTask, AuthTasks::TASK_INTERVAL));
  scheduler->addTask(new Task(&Drive::task, &Drive::task, 10));
}

void loop()
{

  scheduler->tick();
}
