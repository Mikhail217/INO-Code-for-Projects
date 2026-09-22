float sinVal;
float cosVal;
float j;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
for (j=0; j<=2*3.14159; j=j+0.1){
  sinVal=sin(j);
  cosVal=cos(5*j);
  Serial.print(sinVal);
  Serial.print(",");
  Serial.println(cosVal);
 delay(50);
}
}
