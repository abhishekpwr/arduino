/*
Here we will interface 2 LEDs to arduino and 
  make the blink several times.

*/

// First LED
int led1 = 5;

// Second LED
int led2 = 12;

// Time dalay of blinking 
int led1_time = 300;
int led2_time = 300;

// number of blinks
int blink1 = 3;
int blink2 = 5;

void setup() {
  // put your setup code here, to run once:

  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);

  // baud rate
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  // blinking of first LED
  for (int i=blink1; i!=0; i--){
    digitalWrite(led1, HIGH);
    delay(led1_time);

    digitalWrite(led1, LOW);
    delay(led1_time);
  }

  delay(300);

  // Blinking of second LED
  for (int j=blink2; j!=0; j--){
    digitalWrite(led2, HIGH);
    delay(led2_time);

    digitalWrite(led2, LOW);
    delay(led2_time);
  }

  delay(500);

}


//https://wokwi.com/arduino/projects/309600054835937856
