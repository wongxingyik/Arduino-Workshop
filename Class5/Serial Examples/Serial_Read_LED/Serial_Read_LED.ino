//Serial.available()
//Serial.Read() - reads incoming serial data
int state = LOW;
int led1 = 11;
char input;
void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
}

void loop() {
  if(Serial.available()>0)
  {
    input = Serial.read();
    Serial.println(input);
    if (input == 's')
    { 
      state = !state;
      digitalWrite(led1,state);
      
    }
  }
}
