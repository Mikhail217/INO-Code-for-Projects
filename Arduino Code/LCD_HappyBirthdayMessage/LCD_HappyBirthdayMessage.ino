#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int dt=500;
String msg="  Happy Birthday Madeline! Thank you for all the help and for being super fun!! :)";
LiquidCrystal lcd (rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}
void loop() {
  // put your main code here, to run repeatedly:
for (int j=0; j<msg.length(); j=j+1){
  String window=msg.substring(j, j+16);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print(window);
  delay(dt);
}
}
