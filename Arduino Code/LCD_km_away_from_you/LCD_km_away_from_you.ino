#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int dt=500;
int X;
int Y;
String Op;
int myAnswer;
LiquidCrystal lcd (rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:
lcd.setCursor(0,0);
lcd.print("Enter X");
while (Serial.available()==0){
}
X=Serial.parseInt();
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
Y=Serial.parseInt();
lcd.clear();

if(Op=="+"){
  myAnswer=X+Y;
}
lcd.setCursor(0,0); 
lcd.print("Scav is ");
lcd.setCursor(8,0);
lcd.print(j);
lcd.setCursor(10,0);
lcd.print(" km");
lcd.setCursor(0,1);
lcd.print("away from you!");
delay(dt);


lcd.clear();
lcd.setCursor(0,0);
lcd.print("The Answer is: ");
lcd.setCursor(0,1);
lcd.print(X);
lcd.setCursor(0,3);
lcd.print(Op);
lcd.setCursor(0,5);
lcd.print(Y);
lcd.setCursor(0,7);
lcd.print("=");
lcd.setCursor(0,9);
lcd.print(myAnswer);

}
