const int motorPin1 = 11; // Labels pin 11 as motorPin1
const int motorPin2 = 10; // Labels pin 10 as motorPin2

void setup() {
  pinMode(motorPin1, OUTPUT); // Initalizes motorPin1 as an output
  pinMode(motorPin2, OUTPUT); // Initalizes motorPin2 as an output
}

void loop() {
  clockwise(200); // Rotate clockwise
  delay(1000); // Wait for 1 second
  counterclockwise(200); // Rotate counterclockwise
  delay(1000); // Wait for 1 second
}

void clockwise(int speed) {
  analogWrite(motorPin1, speed); // Set the speed of the motor
  analogWrite(motorPin2, 0); // Cut power from motorPin2
}

void counterclockwise(int speed) {
  analogWrite(motorPin2, speed); // Set the speed of the motor
  analogWrite(motorPin1, 0); // Cut power from motorPin1
}
