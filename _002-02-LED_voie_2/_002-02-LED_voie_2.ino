/*
 http://www.arduino.cc/en/Tutorial/BlinkWithoutDelay
 */

// constants won't change. Used here to set a pin number :
      // the number of the LED pin

// Variables will change :
int ledState = LOW;             // ledState used to set the LED

// Generally, you should use "unsigned long" for variables that hold time
// The value will quickly become too large for an int to store
unsigned long previousMillis = 0;        // will store last time LED was updated

// constants won't change :
const long interval = 1000;           // interval at which to blink (milliseconds)
const int ledPin = 3 ;
int oR=0;
char cR=0;
void setup() {
  // set the digital pin as output:
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  // here is where you'd put code that needs to be running all the time.

  // check to see if it's time to blink the LED; that is, if the
  // difference between the current time and last time you blinked
  // the LED is bigger than the interval at which you want to
  // blink the LED.
  unsigned long currentMillis = millis();
  if (Serial.available()>0){
    oR=Serial.read();
    cR=char(oR);
    Serial.print("Arduino a reçu valeur :");
    Serial.print(oR);
    Serial.print(" - Code de :");
    Serial.print(cR);
    
  }
  if(currentMillis - previousMillis >= interval) {
    // save the last time you blinked the LED 
    previousMillis = currentMillis;   

    // if the LED is off turn it on and vice-versa:
    if (ledState == LOW){
      ledState = HIGH;
      Serial.println("Haut");}
    else{
      ledState = LOW;
      Serial.println("Bas");}

    // set the LED with the ledState of the variable:
    digitalWrite(ledPin, ledState);
  }
}

