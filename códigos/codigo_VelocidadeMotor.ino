int motorPin = 9; 
// Declara a variável 'motorPin' e a atribui ao pino 9. 
// Esse será o pino ao qual o motor está conectado.

void setup() 
{
    pinMode(motorPin, OUTPUT);
    // Define o pino 'motorPin' (pino 9) como uma saída, ou seja, 
    // ele será usado para enviar sinais.

    Serial.begin(9600);
    // Inicializa a comunicação serial com uma taxa de transmissão de 9600 bps (bits por segundo), 
    //o que permite enviar e receber dados entre o Arduino e o computador.

    while (!Serial);
    // Aguarda até que a comunicação serial esteja pronta. Esse código é útil em algumas placas que 
    //precisam verificar a conexão antes de prosseguir.

    Serial.println("Speed 0 to 255");
    // Envia a mensagem "Speed 0 to 255" para o monitor serial,
    // que indica ao usuário que ele pode inserir um valor de velocidade entre 0 e 255.
}

void loop() 
{
    if (Serial.available()) 
    {
        // Verifica se há algum dado disponível para ser lido na comunicação serial. 
        // Se houver, o bloco de código dentro deste if será executado.

        int speed = Serial.parseInt();
        // Lê o valor inteiro inserido via monitor serial e armazena na variável 'speed'. 'parseInt()' 
        //tenta converter os dados recebidos em um número inteiro.

        if (speed >= 0 && speed <= 255) 
        {
           analogWrite(motorPin, speed);
           // Se o valor de 'speed' estiver entre 0 e 255, ele será usado para definir o valor da saída PWM no pino 'motorPin' (pino 9).
           // Isso controla a velocidade do motor.
        }
    }
}
