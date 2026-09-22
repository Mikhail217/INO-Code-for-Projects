int redPin=6;
int fullbright=255;
int bright=180;
int halfbright=125;
int dim=40;
int off=0;
int delayT=800;
int onTime=400;
void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin, dim);
delay(onTime);
analogWrite(redPin, off);
delay(delayT);

analogWrite(redPin, halfbright);
delay(onTime);
analogWrite(redPin, off);
delay(delayT);

analogWrite(redPin, bright);
delay(onTime);
analogWrite(redPin, off);
delay(delayT);

analogWrite(redPin, fullbright);
delay(onTime);
analogWrite(redPin, off);
delay(delayT);

}
