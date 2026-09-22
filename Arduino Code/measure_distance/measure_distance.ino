#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int buttonPin=3;
int buttonVal;
int numMeas=100;
float avgMeas;
int j;
float bucket=0;
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
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Measuring . . .");
for(j=1;j<=numMeas;j=j+1){
 digitalWrite(trigPin, LOW);
delayMicroseconds(10);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
pingTravelTime=pulseIn(echoPin, HIGH);
delay(25);
dist=(pingTravelTime*340.*1000.)/2000000.; 
bucket=bucket+dist;
}
avgMeas=bucket/numMeas;
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Time: ");
lcd.print(pingTravelTime);
lcd.print("us");
lcd.setCursor(0,1);
lcd.print("Dist: ");
lcd.print(avgMeas);
lcd.print("mm");
/*
Serial.print("time:");            //For Serial Monitor
Serial.print(pingTravelTime);
Serial.print("us; ");
Serial.print("distance:");
Serial.print(dist);  //or insert avgMeas, could be more OR less accurate
Serial.println("mm");
*/
bucket=0;
delay(5000);
}
