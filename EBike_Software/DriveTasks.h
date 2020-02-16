#ifndef DRIVETASKS
#define DRIVETASKS

class DriveTasks{

  private:

    static DriveTasks* instance;
    DriveTasks();

  public:

  static DriveTasks* getInstance();

  static void throttleTaskStart(void*);
  static void throttleTask(void*);

};

#endif
