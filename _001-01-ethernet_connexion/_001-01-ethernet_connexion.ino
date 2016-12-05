//#include <SPI.h>
#include <Ethernet.h>

const int ledPin = 13;

byte mac[] = { 0x90, 0xa2, 0xda, 0x00, 0x1a, 0x71 };
IPAddress ipLocal(192,168,1,201);
EthernetServer serveurHTTP(80);
void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  Ethernet.begin(mac, ipLocal);
  serveurHTTP.begin();
  delay(1000);
  Serial.print("L'adresse IP du shield Ethernet est :" );
  Serial.println(Ethernet.localIP());
  digitalWrite(ledPin, LOW);
}

void loop() {
  EthernetClient client=serveurHTTP.available();
  if (client) {
    digitalWrite(ledPin, HIGH);
    Serial.println("----");
    Serial.println("CLient OK");
   }
}

