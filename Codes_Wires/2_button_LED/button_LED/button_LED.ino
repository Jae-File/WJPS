void setup() {
  pinMode(2, INPUT); // Set the button as input signal
  pinMode(11, OUTPUT);
}

void loop() {
  if (digitalRead(2) == HIGH) { // When button is pressed
    digitalWrite(11, HIGH);  // Turn on the LED
  }
  else {  // When button is not pressed
    digitalWrite(11, LOW);  // Turn off the LED
  }
}
