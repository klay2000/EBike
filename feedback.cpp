#include "feedback.h"
#include "Arduino.h"

Feedback::Feedback(){
  pinMode(REDPIN, OUTPUT);
  pinMode(GREENPIN, OUTPUT);
  pinMode(BLUEPIN, OUTPUT);
}

void Feedback::setLED(int r, int g, int b){
  analogWrite(REDPIN, r);
  analogWrite(GREENPIN, g);
  analogWrite(BLUEPIN, b);
  
  redVal = r;
  greenVal = g;
  blueVal = b;
}



