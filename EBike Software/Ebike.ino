
#include "controls.h"
#include "feedback.h"
#include "drivetrain.h"

Controls* controls;
Feedback* feedback;
Drivetrain* drivetrain;

void setup() {

  controls = new Controls();
  feedback = new Feedback();
  drivetrain = new Drivetrain();

  Serial.begin(9600);
  
}

void loop() {
  
  switch(controls->isAuthenticated()){
    case true:
      feedback->setLED(controls->getThrottleValue()*255, controls->getThrottleValue()*255, 255);
      drivetrain->setThrottle(controls->getThrottleValue());
    break;

    case false:
      feedback->setLED(255, 0, 0);
      drivetrain->setThrottle(0);
    break;
  }

}
