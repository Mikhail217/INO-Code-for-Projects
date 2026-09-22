int speedPin=5;
int dir1=4;
int dir2=3;
int motorSpeed=90;
int jPin=A1;
int jVal;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(speedPin, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(jPin, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
jVal=analogRead(jPin);
Serial.println(jVal);
if (jVal<510){
digitalWrite(dir1, LOW);
digitalWrite(dir2, HIGH);
motorSpeed=-255./512.*jVal+255.;    //recalculate for the actual joystick!!!
analogWrite(speedPin, motorSpeed);
}
if (jVal>510){
digitalWrite(dir1, HIGH);
digitalWrite(dir2, LOW);
motorSpeed=(255./512.)*jVal+255.;   //recalculate for the actual joystick!!!
analogWrite(speedPin, motorSpeed);
}

}
