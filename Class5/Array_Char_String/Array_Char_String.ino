char abc[] = {'a', 'b', 'c'}

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int x = 0; x < 3 ; x++)
  {
    Serial.println(abc[x]);
    delay(500);
  }
}

/* 1. Set your array as "char" and print a string
 * 2. Set your array as "String" and print a char
 * 
 * Both situations are not working as the declaration is not the same
 * String cannot work with char and char cannot work with String as well.
 */
