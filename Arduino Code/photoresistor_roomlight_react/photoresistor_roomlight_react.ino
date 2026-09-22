/*/need to turn on red when there's no light, turn on blue when there's light. 
So this all technically works but my photoresistor only reacts when I directly put my phone's flashlight right next to it. It doesnt react to room light and always shows reads 0

*/
int pinLight=A0;//pin to read value between photoresistor and 5.1k resistor
int lightVal;
int dt=100;//just delay time
int redPin=7;
int bluePin=5;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(pinLight, INPUT);
pinMode(redPin, OUTPUT);
pinMode(bluePin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(pinLight);
Serial.println(lightVal);
delay(dt);
if(lightVal>40){   /*/I chose 20 since it reads somewhere around 20-40 when I use flashlight. 
The thing is that the dude in tutorial with the same circuit had values of around 700 with room lights on and 200 with room lights off.
Idk if my photoresistor is just different or damaged:( 
*/
  digitalWrite(bluePin, HIGH);
  digitalWrite(redPin, LOW);
}
if(lightVal<40){
digitalWrite(bluePin, LOW);
digitalWrite(redPin, HIGH);
}
}
