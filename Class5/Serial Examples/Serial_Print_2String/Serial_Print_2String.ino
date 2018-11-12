String one = "HI, "; 
/*Try add "\t" and "\n" 
 * "HI, \t" and "Hi, \n"
 */
String two = "How are you?";

void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println(one + two);
}
