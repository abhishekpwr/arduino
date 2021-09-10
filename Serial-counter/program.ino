// simple serial port counter.

// Initial number
int x = 0;

// delay
int wait = 350;

void setup() {

// Baud rate
Serial.begin(9600);
}

void loop() {
Serial.print("x = " );
Serial.println(x);
x += 1;

delay(wait);
}

// Simulate this project on https://wokwi.com/arduino/projects/309143660850577985
