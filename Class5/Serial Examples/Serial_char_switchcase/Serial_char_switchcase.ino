//Serial.available()
//Serial.Read() - reads incoming serial data

char input;
int led1 = 11;
int led2 = 12;

void setup() {
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
}

void loop() {
  if (Serial.available() > 0) //if serial monitor receives anything
  {
    input = Serial.read();
    switch(input){
    
      case 'a':
      digitalWrite(led1, HIGH);
      digitalWrite(led2, LOW);
      break;

      case 'b':
      digitalWrite(led1, LOW);
      digitalWrite(led2, HIGH);
      break;

      case 'c':
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      break;

      default:
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      break;
      
    }
  }
}
