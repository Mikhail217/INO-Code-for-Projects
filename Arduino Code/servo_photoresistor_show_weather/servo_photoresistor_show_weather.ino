#include <Servo.h>
int pinLight=A0;
int lightRead;
int dt=0;
Servo servo1;
int servoPin=11;
int servoAngle=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
servo1.attach(servoPin);
pinMode(pinLight, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightRead=analogRead(pinLight);
Serial.print("Light Value: ");
Serial.print(lightRead);
Serial.print(" ,  Servo Angle: ");
Serial.println(servoAngle);
delay(dt);
servoAngle=(47./120.)*lightRead+43;
servo1.write(servoAngle);
}
