/*

Here we willl write a program to blink LED but 
the Input will be given by the user using serial port.

*/

// number of blinks
int blinks;

int led_pin = 10;
// blinking delay
int time = 500;

void setup() {
  // put your setup code here, to run once:

  // Baud Rate
  Serial.begin(115200);
  pinMode(led_pin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.print("How many blinks do you want : ");

  // when there is no data enterred in serial port : wait
  while (Serial.available() == 0){

  }

  // reading the data when entered

  blinks = Serial.parseInt();

  // Number of blinks
  Serial.println(blinks);

  // Blinking the LED
  for (int i=1; i<=blinks; i+=1){

   digitalWrite(led_pin, HIGH);
   delay(time);

   digitalWrite(led_pin, LOW);
   delay(time);
    
  }
}

// Simulate this project on https:https://wokwi.com/arduino/projects/309782818151465537
