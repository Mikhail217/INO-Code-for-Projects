int speedPin=5;
int dir1=4;
int dir2=3;
int motorSpeed=0;
int BPin1=8;
int BPin2=9;
int B1Val;
int B2Val;
int dt=500;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(speedPin, OUTPUT);
pinMode(dir1, OUTPUT);
pinMode(dir2, OUTPUT);
pinMode(BPin1, INPUT);
pinMode(BPin2, INPUT);
digitalWrite(BPin1, HIGH);
digitalWrite(BPin2, HIGH);


}

void loop() {
  // put your main code here, to run repeatedly:
B1Val=digitalRead(BPin1);
B2Val=digitalRead(BPin2);
Serial.print("Button 1: ");
Serial.print(B1Val);
Serial.print(" Button 2: ");
Serial.print(B1Val);
Serial.print(", Motor Speed: ");
Serial.println(motorSpeed);
if (B1Val==0){
  motorSpeed=motorSpeed-10;
  delay(dt);
}
if (B2Val==0){
  motorSpeed=motorSpeed+10;
  delay(dt);
}
if(motorSpeed>255){
  motorSpeed=255;
}
if(motorSpeed<255){
  motorSpeed=-255;
}
if(motorSpeed==10){
  motorSpeed=100;
}
if(motorSpeed==-10){
  motorSpeed=-100;
}
if (motorSpeed==90 || motorSpeed==95){
  motorSpeed=0;
}
if(motorSpeed==-90 || motorSpeed==-95){
  motorSpeed=0;
}
if (motorSpeed==0){
  analogWrite(speedPin, 0);
}
if (motorSpeed>0){
digitalWrite(dir1, LOW);
digitalWrite(dir2, HIGH);
analogWrite(speedPin, motorSpeed);
}
if (motorSpeed<0){
digitalWrite(dir1, HIGH);
digitalWrite(dir2, LOW);
analogWrite(speedPin, abs(motorSpeed));
}
}


