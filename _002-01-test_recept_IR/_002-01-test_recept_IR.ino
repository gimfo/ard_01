#include <IRremote.h>
const int iLedPin=2;
int iLedEtat=LOW;

const char cRECV_PIN=11;
IRrecv monRecepteurIR(cRECV_PIN);
decode_results sMsg;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  monRecepteurIR.enableIRIn();
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (monRecepteurIR.decode(&sMsg))
  {
    Serial.println(sMsg.value,HEX);
    delay(500);
    monRecepteurIR.resume();
    }
}
