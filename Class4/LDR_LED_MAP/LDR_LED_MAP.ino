int ldr = A0;

int led = 3;

int ldrvalue;
int brightness;

int brightnessMax = 100 ;

int brightnessAverage;

void setup() 
{
  pinMode(ldr, INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}

void loop() 
{
  ldrvalue = analogRead(ldr);

  if (ldrvalue > brightnessMax)
  {
    brightnessMax = ldrvalue ; 
  }
  brightness = map(ldrvalue, 0, brightnessMax, 0 ,255);

  analogWrite(led, brightness);

  Serial.print(ldrvalue);
  Serial.print("\t");
  Serial.print(brightnessMax);
  Serial.print("\t");
  Serial.println(brightness);
  
  
}
