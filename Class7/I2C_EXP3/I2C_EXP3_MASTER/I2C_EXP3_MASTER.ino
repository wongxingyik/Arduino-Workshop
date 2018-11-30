//In this example, we are going to make debounce button and send something to slave for turning on LED. 

#include <Wire.h>

int button = 8;
int p = 0;
int c = 0;

byte out = 0;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  pinMode(button,INPUT);
}

void loop() //This code is sending char to serial monitor to switching the LED on and off
{
  c = digitalRead(button);
  if ( p == LOW && c == HIGH)
  { 
    Wire.beginTransmission(8); 
    Wire.write(out); //Sending 0 in DEC number.
    Wire.endTransmission();
  }
  p = c;
}
/*  Extra Exercise
 *  1. Make 2 buttons and 2 LEDs (You need 3 arduino, 1 is for master, 2 are for slave.)
 */
