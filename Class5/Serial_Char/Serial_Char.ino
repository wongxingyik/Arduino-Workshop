//Serial.available()
//Serial.read() - reads incoming serial data

char abc;

void setup() {
  Serial.begin(9600);
  
}

void loop() {
  if (Serial.available() > 0) //if serial monitor receives anything
  {
    abc = Serial.read();
    Serial.println(abc);
  }
}

/* Try to send "abc" in one time, it will print a, b then c.
 * This is because char only can receive one ascii character at one time.
 * Thus, it will receive and print 'a' first, then 'b' and 'c'.
 */
