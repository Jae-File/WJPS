
int led = 7; // Declare the pin # the LED connected to

void setup() {
  pinMode(led, OUTPUT); // Define the LED as output
}

void loop() {
  digitalWrite(led, HIGH); // Turn on the LED
  delay(1000);  // stay the state (in this case, stay as turned on) for 1 second
                                  // (1000 milisecond is 1 second)
  digitalWrite(led, LOW); // Turn off the LED
  delay(1000);  // stay the state (in this case, stay as turned off) for 1 second
}
