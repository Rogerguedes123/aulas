const int led = 3;
const int botao = 2;
  void setup()
{

  pinMode(botao, INPUT);
  pinMode(led, OUTPUT);
}
  int var;

void loop()
{  
 var = (2);
  if(var == LOW){
 digitalWrite(botao,  HIGH);
  }else{
  
  digitalWrite(botao,  LOW);
  }

 
  delay(10);
}
