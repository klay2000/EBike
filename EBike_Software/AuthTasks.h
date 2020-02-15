#ifndef AUTHTASKS
#define AUTHTASKS

#include <Arduino.h>

class AuthTasks{

  private:
    bool cardAuth = false;
    String cardUID = ""; //will be stored in flash in the future

    AuthTasks();
    static AuthTasks* instance;

  public:
    static const int TASK_INTERVAL = 250;

    bool isAuthenticated();
    static void authTaskStart();
    static void authTask();

    static AuthTasks* getInstance();

};

#endif
