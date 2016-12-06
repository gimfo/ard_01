#include <IRremote.h>

int pin_recept = 11; // On définit le pin 11  
IRrecv ir_recept(pin_recept); 
decode_results ir_decode; // stockage données reçues

void setup() 
{ 
  Serial.begin(9600); 
  ir_recept.enableIRIn(); // Initialisation de la réception 
}

void loop() 
{ 
  if (ir_recept.decode(&ir_decode)) 
  { 
    Serial.println(ir_decode.value, HEX); // On affiche le code en hexadecimal
    ir_recept.resume(); 
  } 
}
