//Serial.available()
//Serial.readStringUntil() - Read is as string.

String abc;

void setup() {
  Serial.begin(9600);
  Serial.println("ready");
}

void loop() {
  if (Serial.available() > 0) //if serial monitor receives anything
  {
    abc = Serial.readStringUntil('\n'); 
    //It will be readed as String before the new line as it stated '\n'
    Serial.println(abc); 
  }
}
