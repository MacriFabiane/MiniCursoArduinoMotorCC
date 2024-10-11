// Definindo os pinos da ponte H
int motorPin1 = 7;  // Pino de controle 1 da ponte H
int motorPin2 = 6; // Pino de controle 2 da ponte H
int enablePin = 8; // Pino de controle da velocidade (PWM)

void setup() {
  // Define os pinos como saída
  pinMode(motorPin1, OUTPUT);
  pinMode(motorPin2, OUTPUT);
  pinMode(enablePin, OUTPUT);
  
  // Inicializa a comunicação serial
  Serial.begin(9600);
  while (!Serial); // Aguarda conexão serial
  Serial.println("Digite uma velocidade entre -255 e 255:");
}

void loop() {
  // Verifica se há dados disponíveis na porta serial
  if (Serial.available()) {
    int speed = Serial.parseInt(); // Lê o valor da velocidade enviado

    if (speed >= -255 && speed <= 255) {
      // Controla a direção e a velocidade do motor
      if (speed > 0) {
        // Movimento para frente
        digitalWrite(motorPin1, HIGH);
        digitalWrite(motorPin2, LOW);
        analogWrite(enablePin, speed);  // Define a velocidade
      } else if (speed < 0) {
        // Movimento para trás
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, HIGH);
        analogWrite(enablePin, -speed);  // Define a velocidade (valor positivo)
      } else {
        // Para o motor
        digitalWrite(motorPin1, LOW);
        digitalWrite(motorPin2, LOW);
        analogWrite(enablePin, 0);
      }
    }
  }
}