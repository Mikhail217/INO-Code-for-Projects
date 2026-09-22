int lightPin=A0;
int buzzPin=7;
int lightVal;
int toneVal;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(lightPin, INPUT);
pinMode(buzzPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
toneVal=(900./64.)*lightVal-((900./64.)*110-1000);
Serial.println(toneVal);
digitalWrite(buzzPin, HIGH);
delayMicroseconds(toneVal);
digitalWrite(buzzPin, LOW);
delayMicroseconds(toneVal);
}
