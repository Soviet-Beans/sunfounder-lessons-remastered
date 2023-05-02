const int buttonPin = 13; // Labels pin 13 as the pin the button is connected to
const int ledPin = 10; // Labels pin 10 as the pin the LED is connected to
int buttonState = 0; // Declares buttonState as a variable

void setup()
{
  pinMode(buttonPin, INPUT); // Initalizes buttonPin as an input pin
  pinMode(ledPin, OUTPUT); // Initalizes ledPin as an output pin
}

void loop()
{
  buttonState = digitalRead(buttonPin); // Reads the power state of buttonPin
  if (buttonState == HIGH) { // If buttonPin is read as powered the LED will turn on
    digitalWrite(ledPin, HIGH); } // Outputs power from ledPin
  else { // If buttonPin is not powered the LED will turn off
    digitalWrite(ledPin, LOW); } // Stops power from ledPin
}
