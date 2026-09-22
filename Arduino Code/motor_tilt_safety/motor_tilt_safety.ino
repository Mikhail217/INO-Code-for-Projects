int speedPin=5;
int dir1=4;
int dir2=3;
int motorSpeed=255;
int tiltPin=2;
int tiltState;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(speedPin, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(tiltPin, INPUT);
digitalWrite(tiltPin, HIGH); //activates internal pull-up resistor 
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(dir1, LOW);
digitalWrite(dir2, HIGH);
analogWrite(speedPin, motorSpeed);
tiltState=digitalRead(tiltPin);
Serial.println(tiltState);
if (tiltState==0){
  analogWrite(speedPin, motorSpeed);
}
if (tiltState==1){
  analogWrite(speedPin, 0);
}
}
