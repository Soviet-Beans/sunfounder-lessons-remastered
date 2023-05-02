const int switchPin = 13; // Labels pin 13 as the pin the switch is connected to
const int ledPin = 10; // Labels pin 10 as the pin the LED is connected to
int switchState = 0; // Declares switchState as a variable

void setup()
{
  pinMode(switchPin, INPUT); // Initalizes switchPin as an input pin
  pinMode(ledPin, OUTPUT); // Initalizes ledPin as an output pin
}

void loop()
{
  switchState = digitalRead(switchPin); // Reads the power state of switchPin
  if (switchState == HIGH) { // If switchPin is read as powered the LED will turn on
    digitalWrite(ledPin, HIGH); } // Outputs power from ledPin
  else { // If switchPin is not powered the LED will turn off
    digitalWrite(ledPin, LOW); } // Stops power from ledPin
}
