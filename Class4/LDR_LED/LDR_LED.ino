/* At this example, you have to create another circuit and pin for your LED
 *  So the connection of LDR still remain.
 *  Eventually, you will see your "ldrvalue" is not going up yo 1023 but we want to maximise it
 *  we will proceed to the next example called "LDR_LED_MAP"
 */

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
  //Turn on the torchlight of your phone, move it to the closest towards LDR and touch it.
  //You will observe that the value is hard to be at 1023.

  analogWrite(led1, ledvalue);
  Serial.print(ledvalue);
  Serial.print("\t");
  Serial.println(ldrvalue);
}
