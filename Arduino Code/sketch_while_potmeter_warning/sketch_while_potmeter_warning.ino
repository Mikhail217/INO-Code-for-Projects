int potPin=A0;
int delayT=100;
int pinLed=13;
int potVal;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(potPin, INPUT);
pinMode(pinLed, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
Serial.println(potVal);
delay(delayT);

while (potVal>=1000){
  digitalWrite(pinLed, HIGH);
  potVal=analogRead(potPin);
  Serial.println(potVal);
  delay(delayT);
  
}
 digitalWrite(pinLed, LOW);
}