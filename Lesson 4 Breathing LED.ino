const int ledPin = 11; // Labels pin 11 as the pin the LED is connected to

void setup()
{
  pinMode(ledPin, OUTPUT); // Initalizes ledPin as an output pin
}

void loop()
{
  for (int brightness = 0; brightness <= 255; brightness++) { // Loops indented code until brightness is 255
    analogWrite(ledPin, brightness); // Sets the voltage of the pin to a slowly increasing number
    delay(3); } // Pauses for 3 milliseconds. Change this number to adjust speed
  for (int brightness = 255; brightness >=0; brightness--)  { // Loops indented code until brightness is 0
    analogWrite(ledPin, brightness); // Sets the voltage of the pin to a slowly decreasing number
    delay(3); } // Pauses for 3 milliseconds. Change this number to adjust speed
}
