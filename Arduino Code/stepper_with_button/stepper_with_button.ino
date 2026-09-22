#include <Stepper.h>
int stepsPerRev=2048;//apparently this is based on the motor but i dont 
int motorSpeed=3;
Stepper stepper1(stepsPerRev, 8, 10, 9, 11);//for some reason putting all those pins in numerical order doesnt allow for counterclockwise rotation at all
int buttonPin=4;
int motorDir=1;
int buttonStateNew;
int buttonStateOld=1;
void setup() {
  
Serial.begin(115200);
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);
stepper1.setSpeed(motorSpeed);
}

void loop() {
  
buttonStateNew=digitalRead(buttonPin);
Serial.println(buttonStateNew);
if (buttonStateOld==1 && buttonStateNew==0){
  motorDir=motorDir*(-1);
}
stepper1.step(motorDir*1);
buttonStateOld=buttonStateNew;
}
