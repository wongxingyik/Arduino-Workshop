#include<Wire.h>

int led =2;

boolean state = false;

void setup() {
  pinMode(led, OUTPUT);
  Wire.begin(8);
  Wire.onReceive(readWire);
  Serial.begin(9600);
}

void loop(){
  
}

void readWire()
{
  if (Wire.available() > 0)
  { 
    if (Wire.read() == 0)
    {
      state = !state;
      digitalWrite(led,state);
    }
  }
}

/*  Extra Exercise
 *  1. Make 2 buttons and 2 LEDs (You need 3 arduino, 1 is for master, 2 are for slave.)
 */
