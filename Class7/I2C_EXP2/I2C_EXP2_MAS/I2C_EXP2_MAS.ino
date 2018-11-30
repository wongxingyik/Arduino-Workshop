#include <Wire.h>

byte a = 1, b = 0;
char abc;
 
void setup() {
  Serial.begin(9600);
  Wire.begin();
}

void loop() {
  if (Serial.available() > 0)
  { 
    abc = Serial.read();
    if (abc == 'a')
    {
      Wire.beginTransmission(8);
      Wire.write(a);
      Wire.endTransmission();
      Serial.println(a);
    }
  }
}

/* 1. Try to send your Variable in character 'a' to slave, NOT TO Serial Monitor. 
 *    Char has a value in DEC number (refer to ASCII Table)
 *    Thus, character 'a' is equal to 97 in int, float or double type.
 *    Refering to number 1. in I2C_EXP2_SLAVE.
 * 2. Make 2 LEDs with 1 slave. Refering to number 2. in I2C_EXP2_MAS.
 * 3. Make 2 LEDs with 2 slave. Refering to number 3. in I2C_EXP2_MAS.
 */
