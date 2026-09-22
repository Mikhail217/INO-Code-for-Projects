int ledPin=8;
int buttonPin=12;
int buttonOld=1;
int buttonNew;
int ledState;
int delayT=100;
void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
Serial.begin(115200);
}
void loop() {
  // put your main code here, to run repeatedly:
buttonNew=digitalRead(buttonPin);
Serial.println(buttonNew);
delay(delayT);
if(buttonOld==0 && buttonNew==1){
  if(ledState==0){
    digitalWrite(ledPin, HIGH);
    ledState=1;
  }
  else{
    digitalWrite(ledPin, LOW);;
    ledState=0;
  }
}
buttonOld=buttonNew;
}
