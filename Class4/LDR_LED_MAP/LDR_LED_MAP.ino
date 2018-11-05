/* From the last example, we want to maximise the value range of ur ldrvalue.
 *  Thus, we set a threshold for you highes "ldrvalue" and use it in map() function.
 */

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
    brightnessMax = ldrvalue ; //The "brightnessMax" will be updated when your "ldrvalue" is higher than it. 
  }
  brightness = map(ldrvalue, 0, brightnessMax, 0 ,255);

  analogWrite(led, brightness);

  Serial.print(ldrvalue);
  Serial.print("\t");
  Serial.print(brightnessMax);
  Serial.print("\t");
  Serial.println(brightness); 
}
