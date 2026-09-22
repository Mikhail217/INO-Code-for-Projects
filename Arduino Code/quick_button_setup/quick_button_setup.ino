int pinButton=7;
int buttonState;
int dt=100;
void setup() {
  // put your setup code here, to run once:
pinMode(pinButton, INPUT);
digitalWrite(pinButton, HIGH);
Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
buttonState=digitalRead(pinButton);
Serial.print("Button State is: ");
Serial.println(buttonState);
delay(dt);
}
