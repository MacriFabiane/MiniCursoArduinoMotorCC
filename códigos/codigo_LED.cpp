int motorPin = 13;
void setup() {
  // put your setup code here, to run once:
   pinMode(motorPin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(motorPin,HIGH);
  delay(5000);
}
 