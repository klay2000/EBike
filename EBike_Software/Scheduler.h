#ifndef SCHEDULER
#define SCHEDULER

#define MAX_TASKS 10

struct Task
{

  unsigned long interval;

  void (*launch)();
  void (*repeat)();

  Task(void l(), void r(), unsigned long i);
};

class Scheduler
{
private:
  Task *tasks[MAX_TASKS];

  unsigned long taskRunTimes[MAX_TASKS];

  int currentTask = 0;
  int numOfTasks = 0;

  static Scheduler *instance;
  Scheduler();

public:
  static Scheduler *getInstance();

  void addTask(Task *task);

  void tick();
};

#endif
