int buzzPin=11;
int dialPin=A1;
int dialVal;
int toneVal;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(buzzPin, OUTPUT);
pinMode(dialPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
dialVal=analogRead(dialPin);
toneVal=(9940./1023.)*dialVal+60;
Serial.println(toneVal);

  digitalWrite(buzzPin, HIGH);
  delayMicroseconds(toneVal);
  digitalWrite(buzzPin, LOW);
  delayMicroseconds(toneVal);

}
