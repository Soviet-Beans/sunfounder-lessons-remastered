const int redPin = 13; // Labels pin 13 as redPin
const int greenPin = 11; // Labels pin 11 as greenPin
const int bluePin = 9; // Labels pin 9 as bluePin
int read = 0; // Declares read as a variable

void setup() {
  pinMode(redPin, OUTPUT); // Initalizes redPin as output
  pinMode(greenPin, OUTPUT); // initalizes greenPin as output
  pinMode(bluePin, OUTPUT); // initalizes bluePin as output
  Serial.begin(9600); // Begins serial monitor
}

void loop() {
  read = Serial.read(); // Sets read to whatever is typed in serial monitor
  if (read == 114) { // If r is typed into serial monitor
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }
  if (read == 103) { // If g is typed into serial monitor
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }
  if (read == 98) { // If b is typed into serial monitor
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  }
  if (read == 111) { // If o is typed into serial monitor
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  }
}
// r = red
// g = green
// b = blue
// o = off
