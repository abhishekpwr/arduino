// Blinking the LED hooked to pin 13.
void setup() {

  pinMode(13, OUTPUT);

}

void loop() {
  // LED ON
  digitalWrite(13, HIGH);

  delay(500);

  // LED OFF
  digitalWrite(13, LOW);
  
  delay(500);

}

// Simulate this project Here :  https://wokwi.com/arduino/projects/308418175160025664
