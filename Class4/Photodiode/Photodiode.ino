/* This example is about photodiode module.
 * The module is built with an infrared ray LED and a photodiode. 
 * We treat the infrared ray LED as Transmitter and photodiode as Receiver.
 * This is because the LED will emit a ray that is not visible to our eyes and the photodiode will receive it
   The module that we are using is shown as picture in the same file and the connection as well.

   RED WIRE = 5V
   BLACK WIRE = Ground
   WHITE WIRE = Digital Pin 3;

  The right side of potentiometer is varying the sentivity of the module. The more the sentivity, the longer the distance of detection.
  For the left side of potentiometer, tune it to average.

  You can try using the module to sense white and black surface to see the output's difference.
  The black surface will give you an output ONE as black is a good absorber. Thus, there is no infrared ray reflected.
  For white surface, it is contraditory with black surface.
 */
int module = 3;
int value;

void setup() {
  pinMode(module, INPUT);
  Serial.begin(9600);
}

void loop() {
  value = digitalRead(module);

  if (value == 1) //When the module is sensing black surface
  {
    Serial.println("It's black or nothing");//do anything you want to do when it senses black
  }
  else //When the module is sensing white surface
  {
    Serial.println("It's white");//do anything you want to do when it senses white
  }
}
