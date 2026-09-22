#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int dt=2000;
float X;
float Y;
String Op;
float myAnswer;
LiquidCrystal lcd (rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
lcd.begin(16,2);
}
void loop() {
  // put your main code here, to run repeatedly:  
lcd.clear();
lcd.setCursor(0,0);
lcd.print("Enter X");
while (Serial.available()==0){
}
X=Serial.parseFloat();
lcd.clear();

lcd.setCursor(0,0);
lcd.print("Enter Operation");
while (Serial.available()==0){
}
Op=Serial.readString();
lcd.clear();

lcd.setCursor(0,0);
lcd.print("Enter Y");
while (Serial.available()==0){
}
Y=Serial.parseFloat();
lcd.clear();

if(Op=="+"){
  myAnswer=X+Y;
}
if(Op=="-"){
  myAnswer=X-Y;
}
if(Op=="*"){
  myAnswer=X*Y;
}
if(Op=="/"){
  myAnswer=X/Y;
}
lcd.setCursor(0,0);
lcd.clear();
lcd.print("The Answer is: ");
lcd.setCursor(0,1);
lcd.print(X);
lcd.print(Op);
lcd.print(Y);
lcd.print("=");
lcd.print(myAnswer);
delay(5000);
lcd.clear();
}
