
int arr[] = {1, 2, 3, 4, 5};

void setup() {
  Serial.begin(9600);
}

void loop() {
  for (int x = 0; x < 5 ; x++)
  {
    Serial.println(arr[x]);
    delay(500);
  }
}
