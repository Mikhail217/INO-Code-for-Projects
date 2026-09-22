#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int buttonPin=3;
int buttonVal;
int trigPin=6;
int echoPin=5;
float pingTravelTime;
float dist;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:


pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(buttonPin, INPUT);
digitalWrite(buttonPin, HIGH);
Serial.begin(115200);
lcd.begin(16,2);

}


void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Place the Target");
lcd.setCursor(0,1);
lcd.print("Press the Button");
buttonVal=digitalRead(buttonPin);
while (buttonVal==1){
  buttonVal=digitalRead(buttonPin);
}
digitalWrite(trigPin, LOW);
delayMicroseconds(10);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
pingTravelTime=pulseIn(echoPin, HIGH);
dist=(pingTravelTime*340.*1000.)/2000000.;
delay(25);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Time:");
lcd.print(pingTravelTime);
lcd.print("us");
lcd.setCursor(0,1);
lcd.print("Ditance:");
lcd.print(dist);
lcd.print("mm");
/*
Serial.print("time:");
Serial.print(pingTravelTime);
Serial.print("us; ");
Serial.print("distance:");
Serial.print(dist);
Serial.println("mm");
*/
delay(5000);
}
