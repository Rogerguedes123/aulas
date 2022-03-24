const int ledVd = 3;
const int botao = 2;
  void setup()
{

  pinMode(botao, INPUT);
  pinMode(ledVd, OUTPUT);
}
  int var;

void loop()
{  
 var = digitalRead(2);
  if(var){
 digitalWrite(ledVd,  HIGH);
  }else{
  
  digitalWrite(ledVd,  LOW);
  }

 
  delay(10);
}
