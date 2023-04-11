const int ledPin = 10; // Labels pin 10 as ledPin
const int potPin = A5; // Labels pin A5 as potPin
int input = 0; // Declares input as a variable
int brightness = 0; // Declares brightness as a variable

void setup() {
  pinMode(potPin, INPUT); // Initializes potPin as an input pin
  pinMode(ledPin, OUTPUT); // Initalizes ledPin as an output pin
}

void loop() {
  input = analogRead(potPin); // Read the value from the potentiometer
  brightness = map(input, 0, 1023, 0, 255); //Convert from 0-1023 proportional to the number of a number of from 0 to 255
  analogWrite(ledPin, brightness); // Sets the LED to the turns the LED on depending on the potentiometer
}
