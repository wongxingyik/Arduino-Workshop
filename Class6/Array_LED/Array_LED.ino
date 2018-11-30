/* In the example, we are using array to turning on our LEDs
 */

int arr[] = {13, 11, 9, 7}; //Create an array for LEDs' pin
int count = 4; 
int current;


void setup() {
  for (current = 0; current < count ; current++)
  {
    pinMode(arr[current], OUTPUT);
  }
}

/* You can initialize you pins one by one in void setup();
 * 
 */

void loop() {
  
  for (current = 0; current < count ; current++)
  {
    digitalWrite(arr[current], HIGH);
    delay(50);
    digitalWrite(arr[current], LOW);
  }
  
  for (current = 3; current >= 0 ; current--)
  {
    digitalWrite(arr[current], HIGH);
    delay(50);
    digitalWrite(arr[current], LOW);
  }
}
/* The LED will turn on and off one by one in the for loop.
 *  
 */
