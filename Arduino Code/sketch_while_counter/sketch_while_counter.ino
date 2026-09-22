
int delayT=400;

int j;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

}

void loop() {
  // put your main code here, to run repeatedly:
    j=1;
  while(j<=10) {
    
    Serial.println(j);
    
    j=j+1;
    delay(delayT); 
  }
  Serial.println();
  
   }