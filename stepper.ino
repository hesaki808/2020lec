#include <Stepper.h>
const int stepsPerRevolution = 200;
Stepper myStepper(stepsPerRevolution, 11, 10, 9, 8);
int stepCount = 1;
int dir = 1;

void setup() {
  Serial.begin(9600);
}

void loop() {
  myStepper.step(dir * 360);
  myStepper.setSpeed(100);
  Serial.print("steps: ");
  Serial.println(stepCount * dir);
  stepCount++;

  if (stepCount > 1) {
    dir = dir * -1   ;
    stepCount = 1;
  }
  delay(300);
}
