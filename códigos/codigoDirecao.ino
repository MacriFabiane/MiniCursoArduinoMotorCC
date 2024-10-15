int IN1 = 5; 
int IN2 = 6; 

void setup() 
{ 
pinMode(IN1, OUTPUT); 
pinMode(IN2, OUTPUT); 
} 

void loop() 
{ 
//Gira o Motor A no sentido horario 
digitalWrite(IN1, HIGH); 
digitalWrite(IN2, LOW); 
delay(2000); 

//Para o motor A 
digitalWrite(IN1, HIGH); 
digitalWrite(IN2, HIGH); 
delay(500); 

//Gira o Motor A no sentido anti-horario 
digitalWrite(IN1, LOW); 
digitalWrite(IN2, HIGH); 
delay(2000); 

//Para o motor A 
digitalWrite(IN1, HIGH); 
digitalWrite(IN2, HIGH); 
delay(500); 
} 
