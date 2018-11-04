int ldr = A0;
int ldrvalue;

int ledvalue;
int led1 = 3;

void setup() 
{
  pinMode(ldr, INPUT);
  pinMode(led1, OUTPUT);
  
  Serial.begin(9600);
}

void loop() 
{
  ldrvalue = analogRead(ldr);
  ledvalue = map(ldrvalue, 0, 1023, 0, 255);

  analogWrite(led1, ledvalue);
  Serial.print(ledvalue);
  Serial.print("\t");
  Serial.println(ldrvalue);
}
