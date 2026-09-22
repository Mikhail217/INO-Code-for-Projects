int redpin=5;
int yllwpin=6;
int delayT=400;
int redBlink=5;
int yllwBlink=3;
int j;
void setup() {
  // put your setup code here, to run once:
pinMode(redpin, OUTPUT);
pinMode(yllwpin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  for(j=1; j<=yllwBlink; j=j+1){
digitalWrite(yllwpin, HIGH);
delay(delayT);
digitalWrite(yllwpin, LOW);
delay(delayT);
  }


  for(j=1; j<=redBlink; j=j+1){
digitalWrite(redpin, HIGH);
delay(delayT);
digitalWrite(redpin, LOW);
delay(delayT);
  }
}