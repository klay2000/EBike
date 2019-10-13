
#include "controls.h"
#include "feedback.h"

Controls* controls;

void setup() {

  controls = new Controls();

  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);

}

void loop() {
  switch(controls->isAuthenticated()){
    case true:
      digitalWrite(BLUEPIN, HIGH);
      digitalWrite(REDPIN, LOW);
    break;

    case false:
      digitalWrite(REDPIN, HIGH);
      digitalWrite(BLUEPIN, LOW);
    break;
  }

}
