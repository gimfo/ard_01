int etatInterrupteur;

void setup() {
        // Configuration de la broche 3 en tant qu'entree numerique.
        pinMode(3,INPUT);

        // Configuration de la broche 2 en tant que sortie numerique
        pinMode(2,OUTPUT);
        Serial.begin(115200);
}

void loop() {

        // Lire l'etat de la broche 3.
        etatInterrupteur = digitalRead(3);
        delay(500);
        Serial.print(etatInterrupteur);
        // Changer l'etat de la broche 2 selon
        // l'etat de l'interrupteur
        if ( etatInterrupteur == LOW ) {
                digitalWrite(2,HIGH);
        } else if ( etatInterrupteur == HIGH ) {
                digitalWrite(2,LOW);
        }

}
