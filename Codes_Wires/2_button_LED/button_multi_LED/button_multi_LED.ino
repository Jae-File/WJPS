void setup() {
  pinMode(2, INPUT); // Set the button as input signal
  pinMode(9,OUTPUT); // green LED
  pinMode(11, OUTPUT);  // red LED
}

void loop() {
  if (digitalRead(2) == HIGH) { // When button is pressed
    digitalWrite(9, HIGH);  // Turn on the green LED
    digitalWrite(11, LOW);  // Turn off the red LED
  }
  else {  // When button is not pressed
    digitalWrite(9, LOW); // Turn off the green LED
    digitalWrite(11, HIGH);  // Turn on the red LED
  }
}
