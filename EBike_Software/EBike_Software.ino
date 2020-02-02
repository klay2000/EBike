#include "Controls.h"
#include "Drive.h"
#include "Scheduler.h"
#include "Screen.h"
#include "Auth.h"

bool t = true;
Controls* i;
Drive* d;

static void testTaskStart(){
    pinMode(PA10, OUTPUT);
}

static void testTask()
{

  //Serial.println(Controls::getInstance()->getThrottle());
//  t = !t;
//  if(t) digitalWrite(PA10, HIGH);
//  else  digitalWrite(PA10, LOW);
}

Scheduler* scheduler;

void setup()
{
  i = Controls::getInstance();

  d = Drive::getInstance();
      
  scheduler = Scheduler::getInstance();

  Serial.begin(115200);

  scheduler->addTask(new Task(&testTaskStart, &testTask, 100));
  scheduler->addTask(new Task(&Drive::task, &Drive::task, 1));
}

void loop()
{

  Serial.println(Auth::getInstance()->isKey());
  scheduler->tick();
}
