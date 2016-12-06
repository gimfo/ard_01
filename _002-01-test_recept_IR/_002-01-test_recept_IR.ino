#include <IRremote.h>
const int pinLED=2;
int etatLED=LOW;

const char RECV_PIN=11;
IRrecv mIR(RECV_PIN);
decode_results sMsg;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mIR.enableIRIn();
  
}

void loop() {
  
  if (mIR.decode(&sMsg))
  {
    Serial.println(sMsg.value,HEX);
    delay(500);
    mIR.resume();
    }
}
