/* This is sender code, it will send some characters to another arduino
 * 
 * CONNECTION FOR RECEIVER
 * 1. Connect your TX and RX pin, which are pin 1 and 0. You have to connect them in vice versa.
 * 2. Connect your both Arduino's ground together.
 * 3. Supply 5V to another arduino, if one of your arduino does not has power supply.
 */
 
void setup() {
  Serial.begin(9600);
}

/* Using single quote and double quote is different.
 * 'a' is char and "a" is String.
 * You can use String to send but you have to receive it as String in the receiver.
 */

void loop() {
  Serial.write('a'); //send character 'a'
  delay(2000);
  Serial.write('b'); //send character 'b'
  delay(2000);
  Serial.write('c'); //send character 'c'
  delay(3000);
}
