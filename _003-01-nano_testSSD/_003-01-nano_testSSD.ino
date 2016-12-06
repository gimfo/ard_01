int etatI;
const int pinSSD=12;
const int pinI=3

void setup() {
        pinMode(pinI,INPUT);
        pinMode(pinSSD,OUTPUT);
        Serial.begin(115200);
}

void loop() {
        etatInterrupteur = digitalRead(pinI);
        delay(500);
        Serial.print(etatI);
        if ( etatI == LOW ) {
                digitalWrite(pinSSD,HIGH);
        } else if ( etatI == HIGH ) {
                digitalWrite(pinSSD,LOW);
        }
}
