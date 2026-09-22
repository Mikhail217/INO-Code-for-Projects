int pinRed=8;
int pinGreen=10;
int pinBlue=12;
String myColor;
String msg1="What color Do You Want?";
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(pinRed, OUTPUT);
pinMode(pinGreen, OUTPUT);
pinMode(pinBlue, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg1);
while(Serial.available()==0){

}
myColor=Serial.readString();

if (myColor=="red"||myColor=="Red"){
  digitalWrite(pinRed, HIGH);
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinBlue, LOW);
}
if (myColor=="green"||myColor=="Green"){
  digitalWrite(pinRed, LOW);
  digitalWrite(pinGreen, HIGH);
  digitalWrite(pinBlue, LOW);
}
if (myColor=="blue"||myColor=="Blue"){
  digitalWrite(pinRed, LOW);
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinBlue, HIGH);
}
if (myColor=="off"||myColor=="Off"){
  digitalWrite(pinRed, LOW);
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinBlue, LOW);
}

if (myColor=="magenta"||myColor=="Magenta"){
  analogWrite(pinRed, 255);
  analogWrite(pinGreen, 0);
  analogWrite(pinBlue, 255);
}
if (myColor=="yellow"||myColor=="Yellow"){
  analogWrite(pinRed, 130);
  analogWrite(pinGreen, 50);
  analogWrite(pinBlue, 0);
}
if (myColor=="cyan"||myColor=="Cyan"){
  analogWrite(pinRed, 0);
  analogWrite(pinGreen, 100);
  analogWrite(pinBlue, 255);
}
if (myColor=="orange"||myColor=="Orange"){
  analogWrite(pinRed, 170);
  analogWrite(pinGreen, 20);
  analogWrite(pinBlue, 0);
}
if (myColor=="fuxia"||myColor=="Fuxia"){
  analogWrite(pinRed, 255);
  analogWrite(pinGreen, 0);
  analogWrite(pinBlue, 150);
}
}
