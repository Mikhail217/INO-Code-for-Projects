int latchPin=11;
int clockPin=9;
int dataPin=12;

byte LED1s=0b10100000;
byte LSB1;
byte MSB1;
int dt=250;


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(latchPin, OUTPUT);
pinMode(dataPin, OUTPUT);
pinMode(clockPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:


digitalWrite(latchPin, LOW);
shiftOut(dataPin, clockPin, LSBFIRST, LED1s);
digitalWrite(latchPin, HIGH);
Serial.println(LED1s, BIN);
delay(dt);   
/*LSB1=LED1s & 0b00000001;
LED1s=LED1s/2;
LED1s=LED1s | (LSB1 <<7);
*/

MSB1=LED1s & 0b10000000;
LED1s=LED1s*2;
LED1s=LED1s | (MSB1 >>7);


}
