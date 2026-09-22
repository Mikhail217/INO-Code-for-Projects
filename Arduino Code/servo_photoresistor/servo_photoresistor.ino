#include <Servo.h>
int pinLight=A0;
int lightRead;
int V1;
int dt=100;
Servo servo1;
int servoPin=11;
int servoPos=0;


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
Serial.print(" ,  Servo Position: ");
Serial.println(servoPos);
delay(dt);
servoPos=(47./120.)*lightRead+43;
servo1.write(servoPos);
}
