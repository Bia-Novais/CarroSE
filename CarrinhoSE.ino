

/*
 		Board pin | NodeMCU GPIO | 	Arduino IDE
 					A- 										1 												5 or D1
 					A+ 										3 												0 or D3
 					B- 										2 												4 or D2
 					B+ 										4 												2 or D4
*/
const int motorA = 5; //velocidade motor A - de 0 a 255
const int motorB = 4; //velocidade motor B - de 0 a 255
const int dirA = 0; //direcao do motor A - HIGH ou LOW
const int dirB = 2; //direcao do motor B - HIGH ou LOW  
int Sensor1 = 13;
int Valor_Sensor1 = 0; 
int Sensor2 = 15;
int Valor_Sensor2 = 0;

void setup(){
  Serial.begin(9600);
  pinMode(motorA, OUTPUT);
  pinMode(motorB, OUTPUT);
  pinMode(dirA, OUTPUT);
  pinMode(dirB, OUTPUT);
  pinMode(Sensor1, INPUT);
  pinMode(Sensor2, INPUT);
  digitalWrite(dirA, HIGH); 
  digitalWrite(dirB, HIGH);
}

void loop(){
  Valor_Sensor1 = analogRead(Sensor1); 
  Valor_Sensor2 = analogRead(Sensor2); 
  
  Serial.print("Sensor 1 = ");
  Serial.print(Valor_Sensor1);
  Serial.print(" | ");
  Serial.print("Sensor 2 = ");
  Serial.println(Valor_Sensor2);
  delay(250);

   if((Valor_Sensor1 < 700) && (Valor_Sensor2 < 700)){
  	analogWrite(motorA, 200); 
  	analogWrite(motorB, 200);
  }
  
  if((Valor_Sensor1 < 700) && (Valor_Sensor2 > 700)){
    analogWrite(motorA, 50); 
  	analogWrite(motorB, 150);
  }
  
  if((Valor_Sensor1 > 700) && (Valor_Sensor2 < 700)){
    analogWrite(motorA, 150); 
  	analogWrite(motorB, 50);
  }  
  
}
