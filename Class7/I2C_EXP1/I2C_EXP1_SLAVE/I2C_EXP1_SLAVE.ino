#include <Wire.h>

char x; //Gonna use it to print it as character 
byte y;
void setup() {
  Serial.begin(9600);
  Wire.begin(8); //Slave has to know which pin has to be readed.
  Wire.onReceive(Print); 
  //When data is received, it will jump to void Print() function.
}

void loop() {
  
}

void Print()
{
  if (Wire.available() > 0)
  { 
    y = Wire.read();
    Serial.println( y );
  }
}

/* 1. If our slave receives the character, 
 *    it will be converted and printed as DEC number in SERIAL MONITER.
 *    Unless your storing variable is in CHAR, it will be printed in character.
 *    
 *    If your storing variable is in INT, FLOAT, DOUBLE, BYTE or WORD.
 *    And want to print it as CHARACTER, USE Below code :
 *    
 *    int x = char(Wire.read()); 
      Serial.println( x );

      char() is a function that will convert it to character. 
 */
