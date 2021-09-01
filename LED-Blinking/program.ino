// Blinking externel LED connected to pin 10
void setup() {
  // put your setup code here, to run once:

  pinMode(10, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // LED ON
  digitalWrite(10, HIGH);

  // 300 milliseconds delay
  delay(300);

  // LED OFF
  digitalWrite(10, LOW);
 
  // 300 milliseconds delay
  delay(300);

}

// Simulate this project Here :  https://wokwi.com/arduino/projects/308418175160025664
