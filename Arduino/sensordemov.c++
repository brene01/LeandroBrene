int pinoledverm = 11;
int pinopir = 5;
int acionamento;
void setup() {
  pinMode(pinoledverm, OUTPUT);
  pinMode(pinopir, INPUT);
}

void loop() {
acionamento = digitalRead(pinopir);
if (acionamento == HIGH)
{
  digitalWrite(pinoledverm, HIGH);
  delay(100);
}
else {
  digitalWrite(pinoledverm, LOW);
  delay(100);  
}
}
