#include <IRremote.h>
#include <IRremoteInt.h>
#include <IRremoteTools.h>

#include <SPI.h>
#include <Ethernet.h>


int RECV_PIN = 11;
const int ledPin =  2;



byte mac[] = { 0x90, 0xa2, 0xda, 0x00, 0x1a, 0x71 };
IPAddress ipLocal(192,168,1,201);
EthernetServer serveurHTTP(80);
void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(ledPin, OUTPUT);
Ethernet.begin(mac, ipLocal);
serveurHTTP.begin();
delay(1000);
Serial.print("L'adresse IP du shield Ethernet est :" );
Serial.println(Ethernet.localIP());
digitalWrite(ledPin, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  EthernetClient client=serveurHTTP.available();
  if (client) {
    Serial.println("----");
    Serial.println("CLient OK");
   }
   
}

