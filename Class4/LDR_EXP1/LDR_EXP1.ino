/* 
 *  For the connection of Light Dependant Resistor, please look to the photo that is attached
 *  in the same file. Thank you.
 *  
 *  RED WIRE goes to 5V,
 *  BLACK WIRE goes to Ground,
 *  WHITE WIRE goes to Analog Zero Pin.
 */

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
}

void loop() {
  Serial.println(analogRead(A0));
}
