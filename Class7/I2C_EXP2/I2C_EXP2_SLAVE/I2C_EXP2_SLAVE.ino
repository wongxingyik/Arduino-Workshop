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
    if (Wire.read() == 1) 
    {
      digitalWrite(led,HIGH);
    }
    else
    {
      digitalWrite(led,LOW);
    }
  }
}

/* 1. Try Wire.read() == 'a' or 97, it will turn on the LED too.
 *    Char has a value in DEC number (refer to ASCII Table)
 *    Thus, character 'a' is equal to 97 in int, float or double type.
 *    Refering to number 1. in I2C_EXP2_MAS.
 * 2. Make 2 LEDs with 1 slave. Refering to number 2. in I2C_EXP2_MAS.
 * 3. Make 2 LEDs with 2 slaves. Refering to number 3. in I2C_EXP2_MAS.
 */
