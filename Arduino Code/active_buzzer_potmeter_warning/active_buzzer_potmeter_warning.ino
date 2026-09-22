int readVal;
int buzzPin=11;
int dialPin=A3;
int delayT=1000;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(buzzPin, OUTPUT);
pinMode(dialPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(dialPin);
Serial.println(readVal);
while (readVal>1000){
  digitalWrite(buzzPin, HIGH);
  readVal=analogRead(dialPin);
  Serial.println(readVal);
}
digitalWrite(buzzPin, LOW);
}
