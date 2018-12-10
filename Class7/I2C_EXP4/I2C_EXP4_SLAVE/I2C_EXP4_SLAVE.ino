// In this example, we going to read something from slave.

#include <Wire.h>

void setup() {
  Wire.begin(8);         
  Wire.onRequest(Print); // register event
}

void loop() {
  delay(100);
}

// function that executes whenever data is requested by master
// this function is registered as an event, see setup()
void Print() {
  Wire.write("hello "); // respond with message of 6 bytes
  // as expected by master
}
