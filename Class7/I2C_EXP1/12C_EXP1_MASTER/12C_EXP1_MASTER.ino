#include <Wire.h>

char cba; //Gonna use it to print it as character 
byte y;
int state = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13, OUTPUT);
  Wire.begin(8); //Slave has to know which pin has to be readed.
  Wire.onReceive(Print); 
  //When data is received, it will jump to void Print() function.
}

void loop() {
  Serial.println(Wire.available());
}

void Print()
{
  if (Wire.available()>0)  {
//     cba = Wire.read(); 
      state = !state;
      digitalWrite(13, state); 
//      Serial.print(state);
//      Serial.print("\t");
//      Serial.println(Wire.read()); 
      //delay(2000);
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
