void setup() {
  pinMode(2, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  led(2);
}

void led(int x)
{
  digitalWrite(x, HIGH);
  delay(200);
  digitalWrite(x, LOW);
  delay(200);
}
