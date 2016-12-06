const int Rvar=0;
int mesureBrute=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  mesureBrute=analogRead(Rvar);
  Serial.println(mesureBrute);
  
  delay(100);
}
