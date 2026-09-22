int greenPin=12;
int redPin=11;
int tiltPin=9;
int tiltVal;

void setup() {
  // put your setup code here, to run once:
pinMode(greenPin, OUTPUT);
pinMode(redPin, OUTPUT);
pinMode(tiltPin, INPUT);
digitalWrite(tiltPin, HIGH);
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltVal=digitalRead(tiltPin);
Serial.println(tiltVal);
if (tiltVal==1){
  digitalWrite(redPin, HIGH);
  digitalWrite(greenPin, LOW);
}
if (tiltVal==0){
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, HIGH);
}
}
