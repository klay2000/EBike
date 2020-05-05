#ifndef OTATASK
#define OTATASK

#include <WebServer.h>

// This task is for over-the-air updates.
class OTATask{
  private:
  static const char* loginIndex;
  static const char* serverIndex;

  static const char* host;
  static const char* ssid;
  static const char* password;

  static WebServer server;

  // OTATask();
  // static OTATask* instance;

  public:
  // static OTATask* getInstance();
  static void OTATaskStart(void*);
  static void OTATaskRun(void*);
};

#endif
