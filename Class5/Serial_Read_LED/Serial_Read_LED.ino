//Serial.available()
//Serial.Read() - reads incoming serial data
// This example is turning on and off by sending character 's' to your Serial monitor.

int state = LOW; //inital state of LED is LOW
int led1 = 11;
char input;

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
}

void loop() {
  if(Serial.available()>0)
  { //When your Serial monitor receives something.
    input = Serial.read();
    
    if (input == 's')
    { 
      Serial.println(input);
      state = !state;
      digitalWrite(led1,state);
    }
    else
    {
      Serial.print(input);
      Serial.print("<---");
      Serial.println("Make sure that you type 's'");
    }
  }
}
