// At here, we are using void function to turn on a LED.

void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  led(2); 
  /* Why "led(2)" here?
   * This is because the value of x is equal to 2 in the void led() function. 
   * 2 = x, so digitalWrite(x, HIGH) = digitalWrite(2, HIGH);
   */
}

void led(int x)
{ 
  digitalWrite(x, HIGH);
  delay(200);
  digitalWrite(x, LOW);
  delay(200);
} 

// YOU CAN TRY THIS 
/*
int x = 2;

void setup() {
  pinMode(x, OUTPUT);
}

void loop() {
  led();
}

void led(){
  digitalWrite(x, HIGH);
  delay(200);
  digitalWrite(x, LOW);
  delay(200);
} 
*/ 
//This is because the variable x is set to global variable and we dont have to declare it in the void led() function again.
