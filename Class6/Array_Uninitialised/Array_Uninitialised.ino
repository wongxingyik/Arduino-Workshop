int arr[5]; //only has 5 numbers in this array.

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int x = 1; x < 6 ; x++)
  {
    arr[x-1] = x ;
  }
  for (int y = 0; y < 6; y++)
  {
    Serial.println(arr[y]);
    delay(1000);
  }
}

/* 1. Try to print before you set the variable in the array.
 * 2. Try to print more than your size
 * 3. Try to print character from you array
 */
