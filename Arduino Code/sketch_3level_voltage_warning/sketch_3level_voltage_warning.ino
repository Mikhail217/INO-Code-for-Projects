int delaytime=100;
int pin1=A0;
int readVal;
float V2;
String mess1="Potentiometer Voltage is ";
int pinRed=13;
int pinYllw=12;
int pinGreen=11;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(pinRed, OUTPUT);
pinMode(pinYllw, OUTPUT);
pinMode(pinGreen, OUTPUT);
pinMode(pin1, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(pin1);
V2=(5./1023.)*readVal;

Serial.print(mess1);
Serial.println(V2);
if (V2<3.) {
  digitalWrite(pinGreen, HIGH);
  digitalWrite(pinRed, LOW);
  digitalWrite(pinYllw, LOW);
}
if (V2>3.  &&  V2<4.){
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinRed, LOW);
  digitalWrite(pinYllw, HIGH);
}
if (V2>=4.){
  digitalWrite(pinGreen, LOW);
  digitalWrite(pinRed, HIGH);
  digitalWrite(pinYllw, LOW);
}
delay(delaytime);
}
