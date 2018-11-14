//Serial.available()
/* We are using Serial.parseInt() here as we want the arduino read the message in decimal form.
 * Kindly refer to Ascii table, if your variable is set as 'int' and you use Serial.Read here,
 * It will convert from character to decimal form.
 */
int number;
int led = 11;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  if (Serial.available() > 0) //if serial monitor receives anything
  {
    number = Serial.parseInt(); 
    
    Serial.println(number);
    analogWrite(led,number);
    /* If you send 256 to the Serial monitor, it will turn off the LED.
     * This is because the analogWrite() can only read from 0 to 255, total 256 levels.
     * PWM is using a timer that is using 6 bits, 2 ^ 8 = 256 levels.
     * Thus, it will consider 256 value as 0.
     */
  }
}
