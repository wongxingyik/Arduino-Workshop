//Serial.available()
//Serial.Read() - reads incoming serial data

int number;
int led = 11;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
}

void loop() {
  if (Serial.available() > 0) //if serial monitor receives anything
  {
    int number = Serial.parseInt();
    analogWrite(led,number);
  }
}
