int numBlink;
int ledPin=12;
int j=1;
int blinkT=300;
int delayT=1000;
String msg1="Please Enter The Blink Number:";

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(ledPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg1);
while(Serial.available()==0){

}
numBlink=Serial.parseInt();
for(j=1; j<=numBlink; j=j+1) {
  digitalWrite(ledPin, HIGH);
  delay(blinkT);
  digitalWrite(ledPin, LOW);
  delay(blinkT);
}
}
