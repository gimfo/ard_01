const int Rvar=5;
int mesureBrute=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(3,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  mesureBrute=digitalRead(Rvar);
  Serial.println(mesureBrute);
  if (mesureBrute==HIGH) {
    digitalWrite(10,HIGH);
  }
  else {
    digitalWrite(3,LOW);
  }
  delay(100);
}
