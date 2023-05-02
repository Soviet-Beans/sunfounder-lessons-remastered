const int redPin = 11; // Labels pin 11 as the pin red is on
const int greenPin = 9; // Labels pin 9 as the pin green is on
const int bluePin = 10; // Labels pin 10 as the pin blue is on

void setup() {
  pinMode(redPin, OUTPUT); // Initalizes redPin as an output pin
  pinMode(greenPin, OUTPUT); // Initalizes greenPin as an output pin
  pinMode(bluePin, OUTPUT); // Initalizes bluePin as an output pin
}

void loop() {
  color(255, 0, 0); // Sets LED to red
  delay(1000); // Pauses for 1 second
  color(0, 255, 0); // Sets LED to green
  delay(1000); // Pauses for 1 second
  color(0, 0, 255); // Sets LED to blue
  delay(1000); // Pauses for 1 second
  color(255, 0, 52); // Sets LED to red
  delay(1000); // Pauses for 1 second
  color(237, 90, 0); //Sets LED to orange
  delay(1000); // Pauses for 1 second
  color(255, 215, 0); // Sets LED to yellow
  delay(1000); // Pauses for 1 second
  color(34,139,34); // Sets LED to green
  delay(1000); // Pauses for 1 second
  color(0,112,255); // Sets LED to blue
  delay(1000); // Pauses for 1 second
  color(0,46,90); // Sets LED to indigo
  delay(1000); // Pauses for 1 second
  color(128,0,128); // Sets LED to purple
  delay(1000); // Pauses for 1 second
}

void color(unsigned char red, unsigned char green, unsigned char blue) {
  analogWrite(redPin, red); // Sets redPin to stated value
  analogWrite(greenPin, green); // Sets greenPin to stated value
  analogWrite(bluePin, blue); // Sets bluePin to stated value
}
