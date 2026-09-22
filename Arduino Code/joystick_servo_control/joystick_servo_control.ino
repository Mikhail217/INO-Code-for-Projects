#include <Servo.h>
Servo servo1;
int servoPin=6;
int servoAngle=0;
int pinX=A0;
int pinY=A1;
int pinSW=2;
int pinBuzz=12;
int Xval;
int Yval;
int SWval;
int dt=0;
void setup() {
  // put your setup code here, to run once:
pinMode(pinX, INPUT);
pinMode(pinY, INPUT);
pinMode(pinSW, INPUT);
pinMode(pinBuzz, OUTPUT);
Serial.begin(115200);
digitalWrite(pinSW, HIGH);
servo1.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
Xval=analogRead(pinX);
Yval=analogRead(pinY);
SWval=digitalRead(pinSW);
delay(dt);
Serial.print("X Value: ");
Serial.print(Xval);
Serial.print(" | Y Value: ");
Serial.print(Yval);
Serial.print(" | Switch State: ");
Serial.print(SWval);
Serial.print(" | Servo Angle: ");
Serial.println(servoAngle);
servoAngle=(90./513.)*Yval-(510.*90./513.)+90;
servo1.write(servoAngle);
digitalWrite(pinBuzz, !SWval);
}
