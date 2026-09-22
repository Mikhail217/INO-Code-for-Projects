int ledPin=9;
int potPin=A0;
int potVal;
float LEDVal; 

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(potPin, INPUT);
Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
potVal=analogRead(potPin);
LEDVal=(255./1023.)*potVal;
analogWrite(ledPin, LEDVal);
Serial.println(LEDVal);
}
