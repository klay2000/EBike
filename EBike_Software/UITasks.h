#ifndef UITASKS
#define UITASKS

class UITasks{

  private:
    static UITasks* instance;

    UITasks();

  public:

    static UITasks* getInstance();


};

#endif
