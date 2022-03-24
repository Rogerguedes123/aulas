const int led = 2;
const int led2 = 3;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(led2, OUTPUT);
}

void loop()
{
  digitalWrite(led, HIGH);
  digitalWrite(led2, LOW);
  delay(1000); 
  digitalWrite(led2, HIGH);
  digitalWrite(led, LOW);
  delay(1000); 
}
