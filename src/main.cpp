#include <Arduino.h>
const int relayPin = 12;

void setup()
{
  pinMode(relayPin, OUTPUT);
}

void loop()
{
  digitalWrite(relayPin, LOW);
  delay(500);
  digitalWrite(relayPin, HIGH);
  delay(500);
}