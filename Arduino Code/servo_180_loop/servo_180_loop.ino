#include <Servo.h>

int servoPin=11;
int servoPos=0;
Servo myServo;
int dt=15;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("What Angle for the Servo?");
while(Serial.available()==0){

}
servoPos=Serial.parseInt();
myServo.write(servoPos);
}
