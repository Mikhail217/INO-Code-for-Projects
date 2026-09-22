#include <Stepper.h>
int stepsPerRev=2048;
int motSpeed=10;
Stepper stepper1(stepsPerRev, 8, 10, 9, 11);
int dt=500;
int buttonPin=12;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
stepper1.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
stepper1.step(stepsPerRev);
delay(dt);
stepper1.step(-stepsPerRev);
delay(dt);
}
