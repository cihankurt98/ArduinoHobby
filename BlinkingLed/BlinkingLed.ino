/* 
  English:
  Blink
  Switches a LED on/off each second, repeatedly.
  The comments are in Dutch.
  Check the Dutch documentation at: http://www.codeasy.nl/HIERMOETNOGWAT

  modified 11 November 2018
  by Cihan Kurt

*/

int ledPin = 7; // De LED staat verbonden aan digital pin 7. 

//De setup wordt eenmalig uitgevoerd als de Arduino is opgestart.
void setup()
{
  pinMode(ledPin, OUTPUT); //De LED is een output.
}

//De loop functie wordt steeds opnieuw aangeroepen.
void loop()
{
  //Leest eerst de huidige status van ledPin en doet dan het tegenovergestelde.
  digitalWrite(ledPin, !digitalRead(ledPin));
  delay(1000); // Voer 1 seconde niks uit.
}

