byte myByte=0x00;
int dt=500;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(myByte, DEC);
Serial.print("   ");
Serial.print(myByte, BIN);
Serial.print("   ");
Serial.println(myByte, HEX);
myByte=myByte+1;
delay(dt);
}
