/* At this example, the sender will send character 'a' to the receiver and print it in sender's monitor.
 * 1. Connect Tx and Rx pin which are pin 1 and 0 and connect them in vice versa. 
 * 2. Connect both Arduinos' GND together.
 * 3. Connect 5V to another arduino if the another arduino does not has power supply.
 */

char abc;

void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0)
  { 
    abc = Serial.read();
    Serial.println(abc);
  }
}
/* IF YOU GET UNNECCESSARY NUMBER OR UNKNOWN IN THE SERIAL MONITOR, READ THIS!!!
 *  
 * You will get unknown as the moment you open the serial monitor,
 * it will reset the timer of the Arduino that is opening the serial monitor and 
 * cause both Arduinos are not syncing together.
 * So, by now, you have to press the RESET Button from either one of the Arduinos,
 * both arduino will reset and start together.
 * 
 */
