int ledPin=6;
int button1Pin=12;
int button1State;
int button2Pin=10;
int button2State;
int ledState=0;
int delayT=250;
int buzzPin=2;

void setup() {
  // put your setup code here, to run once:
pinMode(ledPin, OUTPUT);
pinMode(button1Pin, INPUT);
pinMode(button2Pin, INPUT);
pinMode(buzzPin, OUTPUT);
Serial.begin(115200);
}
void loop() {
  // put your main code here, to run repeatedly:
button1State=digitalRead(button1Pin);
button2State=digitalRead(button2Pin);
Serial.print(button1State);
Serial.print("  ");
Serial.print(button2State);
Serial.print("  ");
delay(delayT);

if(button1State==0){
    ledState=ledState+25;
} 
if(button2State==0){
  ledState=ledState-25;
}
Serial.println(ledState);
if (ledState>255){
  ledState=255;
  digitalWrite(buzzPin, HIGH);
  delay(delayT);
  digitalWrite(buzzPin, LOW);
}
if (ledState<0){
  ledState=0;
  digitalWrite(buzzPin, HIGH);
  delay(delayT);
  digitalWrite(buzzPin, LOW);
}
analogWrite(ledPin, ledState);
}
