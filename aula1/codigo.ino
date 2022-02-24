// C++ code
//
void setup()
{
  pinMode(4, INPUT);
  pinMode(3, OUTPUT);
  
}

int var;

void loop()
{  
 var = digitalRead(4);
digitalWrite(3, var);
delay(10);
}
