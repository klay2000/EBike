#ifndef AUTHTASK
#define AUTHTASK

#include <Arduino.h>

class AuthTask{

  private:
    static bool cardAuth;
    static String cardUID; //will be stored in flash in the future

  public:
    static bool isAuthenticated();
    static void authTaskStart(void*);
    static void authTaskRun(void*);

};

#endif
