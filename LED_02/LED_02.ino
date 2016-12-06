void clignote(int nombre) {
  while(nombre>0){
    digitalWrite(10,HIGH);
    delay(100);
    digitalWrite(10,LOW);
    delay(50);
    nombre--;
  }
}
void setup() {
  // put your setup code here, to run once:
  pinMode(10,OUTPUT);
}

void loop() {
  clignote(3);
  delay(1000);
  
}
