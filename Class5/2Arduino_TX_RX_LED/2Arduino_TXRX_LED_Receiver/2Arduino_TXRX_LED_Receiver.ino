/* This is receiver code, it will do what another Arduino sent from the sender code
 * 
 * CONNECTION FOR RECEIVER
 * 1. Connect your LED in pin 2
 * 2. Connect your TX and RX pin, which are pin 1 and 0. You have to connect them in vice versa.
 * 3. Connect your both Arduino's ground together.
 * 4. Supply 5V to another arduino, if one of your arduino does not has power supply.
 */

char state; //Variable for storing character.

void setup() {
  Serial.begin(9600); //Have to match the baud rate from another arduino.
  pinMode(2, OUTPUT);
}

void loop() {
  if (Serial.available()>0)
  {
  state = Serial.read();
  switch (state)
  {
    case 'a' : 
      //turn on led when receive 'a' character.
      digitalWrite(2, HIGH);
      Serial.println(state);
      break; 
      
    case 'b' :
      //turn off led when receive 'b' character.
      digitalWrite(2, LOW);
      Serial.println(state);
      break;
      
    case 'c' :
      //blink led when receive 'c' character.
      Serial.println(state);
      while (Serial.available() == 0)
      {
        digitalWrite(2, HIGH);
        delay(100);
        digitalWrite(2, LOW);
        delay(100);
      } //the while loop is for keep blinking when there is no new character receive.
      break;
      
    default : digitalWrite(2,LOW);
              break;
              //when it receive other than 'a', 'b' and 'c', it will turn off the led.
  }
  }
}
