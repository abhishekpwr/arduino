
/*
  ## Interfacing With a Piezoelectric Buzzer : 

- Here we will inter face The Buzzer and Potentiometer with Arduino.
- The Buzzer will be activated when resistant value in potentiometer 
  is above certain thershold.


  ## value of the potentiometer is between 0 and 1023	

*/

int potentiometer_val;
int buzzer_pin = 10;
int potentiometer_pin = A3;
int threshold = 1000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);
pinMode(buzzer_pin, OUTPUT);
pinMode(potentiometer_pin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

potentiometer_val = analogRead(potentiometer_pin);

Serial.print("resistance = ");
Serial.println(potentiometer_val);

while (potentiometer_val > threshold){
  digitalWrite(buzzer_pin, HIGH);
  potentiometer_val = analogRead(potentiometer_pin);
  Serial.print("resistance = ");
  Serial.println(potentiometer_val);
}

}
