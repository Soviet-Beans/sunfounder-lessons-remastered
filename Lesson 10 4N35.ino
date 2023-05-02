const int optoPin = 7; // Labels pin 7 as optoPin

void setup()
{
  pinMode(optoPin, OUTPUT); // Initalizes optoPin as an output pin
}

void loop()
{
  digitalWrite(optoPin, HIGH); // Sets optoPin to high
  delay(1000); // Pauses for 1 second
  digitalWrite(optoPin, LOW); // Sets optoPin to low
  delay(1000); // Pauses for 1 second
}
