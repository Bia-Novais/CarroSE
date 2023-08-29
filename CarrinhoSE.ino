void setup()
{
  //Motor 1
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  
  //Motor 2
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
   //O CARRO VAI PARA A FRENTE
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  
  digitalWrite(10, LOW);
  digitalWrite(9, HIGH);
  delay (4000);
  
   //O CARRO SE MOVE PARA TRÁS
  digitalWrite(12, LOW);
  digitalWrite(11, HIGH);
  
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay (2000);
  
  //O CARRO SE MOVE PARA A DIREITA
  digitalWrite(12, HIGH);
  digitalWrite(11, LOW);
  
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay (2000);
  
  
  //O CARRO SE MOVE PARA A ESQUERDA
  digitalWrite(12, LOW);
  digitalWrite(11, LOW);
  
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay (2000);
  
 
  
}
