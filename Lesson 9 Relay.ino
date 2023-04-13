const int relayPin(8); // Labels pin 8 as relayPin

void setup()
{
  pinMode(relayPin, OUTPUT); // Initalizes relayPin as an output pin
}

void loop()
{
  digitalWrite(relayPin, HIGH); // Sets relayPin to high
  delay(1000); // Wait 1000 milliseconds
  digitalWrite(relayPin, LOW); // Sets relayPin to low
  delay(1000); // Wait 1000 milliseconds
}
