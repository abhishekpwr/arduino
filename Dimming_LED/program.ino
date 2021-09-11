/*

In this project, we will use Potentiometer to control brightness of the 
LED using AnalogRead.

-> Value of the potentiometer is between :  0 and 1023.


-> LED brightness value is between :  0 and 255.


LED_brightness = (255/1023) * potentiometer value

*/


// Analog pin A1 as an Analog Input
int pot = A1;
int led = 10;

// value of potentiometer
int pot_val;
float brightness;

void setup() {
  // put your setup code here, to run once:

  // for reading potentiometer value via analog pin A1 
  pinMode(pot, INPUT);

  // To give output to the led.
  pinMode(led, OUTPUT);

// Baud rate
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:


  // reading value from potentiometer

  pot_val = analogRead(pot);

  // converting potentiometer input to brightness
  brightness = (255./1023.) * pot_val;

  // brightness to the LED
  analogWrite(led, brightness);

  Serial.println(brightness);

}

// Simulate this project on https://wokwi.com/arduino/projects/309416416621101634
