#ifndef FEEDBACKTASKS
#define FEEDBACKTASKS

class FeedbackTasks{
  private:
  
  public:
  static void notificationLightTaskStart(void*);
  static void notificationLightTaskRun(void*);

  static void telemetryTaskStart(void*);
  static void telemetryTaskRun(void*);

};

#endif