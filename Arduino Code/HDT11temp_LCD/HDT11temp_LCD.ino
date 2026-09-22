#include <DHT.h>
#define Type DHT11
#include <LiquidCrystal.h>
int rs=7;
int en=8;
int d4=9;
int d5=10;
int d6=11;
int d7=12;
int sensePin=2;
DHT HT(sensePin, Type);
float humidity;
float tempC;
float tempF;
int setTime=500;
int dt=200;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
lcd.begin(16,2);
HT.begin();
delay(setTime);
}

void loop() {
  // put your main code here, to run repeatedly:
humidity=HT.readHumidity();
tempC=HT.readTemperature();
tempF=HT.readTemperature(true);
lcd.clear();
lcd.setCursor(0,0);
lcd.print("HUM: ");
lcd.setCursor(5,0);
lcd.print(humidity);
lcd.print(" TEMP:");
lcd.setCursor(0,1);


lcd.print(tempC);
lcd.print("C ");
lcd.print(tempF);
lcd.print("F");


Serial.print("Humidity: ");
Serial.print(humidity);
Serial.print(" Temperature ");
Serial.print(tempC);
Serial.print(" C ");
Serial.print(tempF);
Serial.println(" F");
delay(dt);
}
