//Definindo os pinos dos LEDs
int ledVermelho = 13;
int ledAmarelo = 12;
int ledVerde = 11;

void setup(){
    //Configurando os pinos como saídas
    pinMode(ledVermelho, OUTPUT);
    pinMode(ledAmarelo, OUTPUT);
    pinMode(ledVerde, OUTPUT);
}

void loop(){
    //Liga o LED verde por 5 segundos
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, LOW);
    delay(5000); //Aguarda 5 segundos

    // Liga o LED amarelo por 2 segundos
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVermelho, LOW);
    delay(2000); //Aguarda 2 segundos

    // Liga o LED vermelho por 5 segundos
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVermelho, HIGH);
    delay(5000); //Aguarda 5 segundos
}