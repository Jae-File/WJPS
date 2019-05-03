
int knob = 0;
int ledPin = 9;
int brightness = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  knob = analogRead(A0);
//  float knobVolts = knob * (5.0/1024.0);
  brightness = knob/4;
  analogWrite(ledPin, brightness);
  Serial.println(knob);
//  Serial.print(knobVolts);
//  Serial.print("\t");
//  Serial.print(brightness);
//  Serial.print("\t");
//  Serial.println(knob);
}
