/*  Interfacing with RGB LED

- By default, the common pin is the Cathode (negative).

*/

int red = 11;
int blue = 10;
int green = 9;

String color;

String msg = "What color do you want ?";

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);

pinMode(red, OUTPUT);
pinMode(blue, OUTPUT);
pinMode(green, OUTPUT);

}

void set_color(int r, int g, int b){
    analogWrite(red, r);
    analogWrite(green, g);
    analogWrite(blue, b);

}

void loop() {
  // put your main code here, to run repeatedly:
  
  Serial.println("red");
  set_color(255, 0, 0); // red
  delay(500);
 
  Serial.println("blue");
  set_color(0,255, 0); // blue
  delay(500);
  
  Serial.println("green");
  set_color(0, 0, 255); // green
  delay(500);
  
  Serial.println("pink");
  set_color(255, 255, 0);  // pink
  delay(500);
   
  Serial.println("yellow");
  set_color(80, 0, 80);  // yellow
  delay(500);

  Serial.println("aqua"); 
  set_color(0, 255, 255);  // aqua
  delay(500);

}

// simulate this project : https://wokwi.com/arduino/projects/310050921657664065
