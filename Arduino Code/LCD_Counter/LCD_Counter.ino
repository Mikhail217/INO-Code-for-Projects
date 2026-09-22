#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int dt=180;
LiquidCrystal lcd (rs,en,d4,d5,d6,d7);

void setup() {
  // put your setup code here, to run once:
lcd.begin(16,2);
}

void loop() {
  // put your main code here, to run repeatedly:

for (int j=50; j>=0; j=j-1){
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
}

}
