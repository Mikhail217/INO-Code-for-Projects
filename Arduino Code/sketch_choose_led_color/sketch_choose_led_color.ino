String choice;
int pinRed=12;
int pinGreen=10;
int pinBlue=8;
String msg="Which Color do You Want to Light? ";




void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(pinRed, OUTPUT);
pinMode(pinGreen, OUTPUT);
pinMode(pinBlue, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg);
while (Serial.available()==0){

}
choice=Serial.readString();
if (choice=="red"||choice=="Red"||choice=="RED"){
  digitalWrite(pinRed, HIGH);
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinBlue, LOW);
}

if (choice=="green"||choice=="Green"||choice=="GREEN"){
  digitalWrite(pinGreen, HIGH);
  digitalWrite(pinRed, LOW);
  digitalWrite(pinBlue, LOW);
}

if (choice=="blue"||choice=="Blue"||choice=="BLUE"){
  digitalWrite(pinBlue, HIGH);
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinRed, LOW);
}
}
