//Serial.available()
//Serial.Read() - reads incoming serial data
/* We are using two led in this examples.
 * We will send the character from the Serial Monitor and
 * The Arduino will do something according to the switch case after receiving character.
 */
char input;
int led1 = 11; //connect your LEDs to pin 11 and 12
int led2 = 12;

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  if (Serial.available() > 0) //if serial monitor receives anything
  { 
    Serial.println(Serial.available()); //it will print "1" as there is something send to Serial monitor
    input = Serial.read();
    switch(input){
    
      case 'a': //turn on pin 11's LED
      digitalWrite(led1, HIGH); 
      digitalWrite(led2, LOW);
      break;

      case 'b': //turn on pin 12's LED
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      break;

      case 'c': //turn on both
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      break;

      default: //Sending other than 'a', 'b' and 'c' will turn off both LEDs
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      break;
      
    }
  }
}
