int redPin=8;
int delayT=800;
int shrtbeep=100;
int longbeep=400;

void setup() {
  // put your setup code here, to run once:
pinMode(redPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redPin, HIGH);
delay(shrtbeep);
digitalWrite(redPin, LOW);
delay(shrtbeep);

digitalWrite(redPin, HIGH);
delay(shrtbeep);
digitalWrite(redPin, LOW);
delay(shrtbeep);

digitalWrite(redPin, HIGH);
delay(shrtbeep);
digitalWrite(redPin, LOW);
delay(longbeep);


digitalWrite(redPin, HIGH);
delay(longbeep);
digitalWrite(redPin, LOW);
delay(longbeep);

digitalWrite(redPin, HIGH);
delay(longbeep);
digitalWrite(redPin, LOW);
delay(longbeep);

digitalWrite(redPin, HIGH);
delay(longbeep);
digitalWrite(redPin, LOW);
delay(longbeep);


digitalWrite(redPin, HIGH);
delay(shrtbeep);
digitalWrite(redPin, LOW);
delay(shrtbeep);

digitalWrite(redPin, HIGH);
delay(shrtbeep);
digitalWrite(redPin, LOW);
delay(shrtbeep);

digitalWrite(redPin, HIGH);
delay(shrtbeep);
digitalWrite(redPin, LOW);
delay(longbeep);
delay(delayT);

}
