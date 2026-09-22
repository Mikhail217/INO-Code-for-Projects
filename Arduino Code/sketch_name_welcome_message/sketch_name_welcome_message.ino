String myName;
String msg1="What is your Name?";
String msg2="Hello ";
String msg3=", Welcome to Arduino!";


void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg1);
while (Serial.available()==0){

}
  myName=Serial.readString();
  Serial.print(msg2);
  Serial.print(myName);
  Serial.println(msg3);
  Serial.println();
}

