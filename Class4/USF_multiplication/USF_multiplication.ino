void setup(){
  Serial.begin(9600);
}

void loop() {
  int a = 2;
  int b = 3;
  int c;

  c = multiplication(a, b); // k now contains 6
  Serial.println(c);
  delay(500);
}

int multiplication(int x, int y){
  int result;
  result = x * y;
  return;
}
