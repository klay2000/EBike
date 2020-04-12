#ifndef AUTHTASKS
#define AUTHTASKS

#include <Arduino.h>

class AuthTasks{

  private:
    static bool cardAuth;
    static String cardUID; //will be stored in flash in the future

    AuthTasks();
    static AuthTasks* instance;

  public:
    bool isAuthenticated();
    static void authTaskStart(void*);
    static void authTask(void*);

    static AuthTasks* getInstance();

};

#endif
