//Serial.available()
//Serial.Read() - reads incoming serial data
//Serial.readStringUntil() - 

String abc;

void setup() {
  Serial.begin(9600);
  Serial.println("ready");
}

void loop() {
  if (Serial.available() > 0) //if serial monitor receives anything
  {
    abc = Serial.readStringUntil('\n');
//    abc.trim(); //remove white space between string('\o' - NULL terminating )
    Serial.println(abc); 
  }
}
