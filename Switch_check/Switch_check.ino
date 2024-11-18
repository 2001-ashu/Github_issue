#define LED_PIN 7
#define BUTTON_PIN 2
 
 
int toggleState = 0;
 

 
void setup() 
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(BUTTON_PIN, INPUT);
}
 
void loop() 
{
  if(digitalRead(BUTTON_PIN)==toggleState)
  {
  digitalWrite(LED_PIN,LOW);
  delay(1000);
  }
  else
  {
      digitalWrite(LED_PIN,HIGH);
  delay(1000);
  }
}