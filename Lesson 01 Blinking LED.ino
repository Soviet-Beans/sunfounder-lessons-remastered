const int ledPin = 13; // Labels pin 13 as the pin the LED is connected to

void setup()
{
  pinMode(ledPin, OUTPUT); // Initalizes ledPin as an output pin
}

void loop()
{
  digitalWrite(ledPin, HIGH); // Outputs power from ledPin
  delay(500); // Pauses for half a second before turning the LED off
  digitalWrite(ledPin, LOW); // Stops power from ledPin
  delay(500); // Pauses for half a second before turning the LED on
}
