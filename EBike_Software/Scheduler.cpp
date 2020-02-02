#include "scheduler.h"
#include "arduino.h"

Task::Task(void l(), void r(), unsigned long i)
{
  this->launch = *l;

  this->repeat = *r;

  this->interval = i;
}

Scheduler* Scheduler::instance;

Scheduler::Scheduler() {}

Scheduler *Scheduler::getInstance()
{
  if (instance == 0)
    instance = new Scheduler();

  return instance;
}

void Scheduler::tick()
{

  int indexToRun = 0;

  for (int i = 1; i < numOfTasks; ++i)
  {
    if (taskRunTimes[i] < taskRunTimes[indexToRun])
      indexToRun = i;
  }

  if (taskRunTimes[indexToRun] <= millis())
  {
    tasks[indexToRun]->repeat();
    taskRunTimes[indexToRun] = millis() + tasks[indexToRun]->interval;
  }
}

void Scheduler::addTask(Task *task)
{

  tasks[numOfTasks] = task;

  taskRunTimes[numOfTasks] = millis();

  tasks[numOfTasks]->launch();

  ++numOfTasks;
}
