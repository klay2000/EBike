#include "Controls.h"
#include "Drive.h"
#include "Scheduler.h"
#include "CardReader.h"
#include "AuthTask.h"
#include "DriveTasks.h"
#include "OTATask.h"
#include "Bluetooth.h"
#include "IOExpander.h"
#include "Lights.h"
#include "LightsTask.h"
#include "FeedbackTasks.h"

Bluetooth* bt;
Controls* i;
Drive* d;
IOExpander* io;
Lights* l;
CardReader* c;

static void testTaskStart(void*){
}

static void testTask(void*)
{
  
  bt->debugPrintln(String(d->getRPM()));

}

Scheduler* scheduler;

void setup()
{

  bt =  Bluetooth::getInstance();

  i = Controls::getInstance();

  d = Drive::getInstance();

  io = IOExpander::getInstance();

  l = Lights::getInstance();

  c = CardReader::getInstance();

  scheduler = Scheduler::getInstance();

  Serial.begin(115200);

  scheduler->addTask(new Task(&testTaskStart, &testTask, 100));
  scheduler->addTask(new Task(&AuthTask::authTaskStart, &AuthTask::authTaskRun, 100));
  scheduler->addTask(new Task(&DriveTasks::throttleTaskStart, &DriveTasks::throttleTask, 10));
  scheduler->addTask(new Task(&OTATask::OTATaskStart, &OTATask::OTATaskRun, 200));
  scheduler->addTask(new Task(&LightsTask::lightsTaskStart, &LightsTask::lightsTaskRun, 50));
  scheduler->addTask(new Task(&FeedbackTasks::notificationLightTaskStart, &FeedbackTasks::notificationLightTaskRun, 20));
}

void loop()
{
  scheduler->tick();
}
