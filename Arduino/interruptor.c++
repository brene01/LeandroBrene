const int buttonPin = 2;   // Pino do botão
const int led1Pin = 3;     // Pino do LED 1
const int led2Pin = 4;     // Pino do LED 2

int buttonState = 0;       // Estado atual do botão
int lastButtonState = 0;   // Último estado do botão
unsigned long lastDebounceTime = 0; // Tempo do último debounce
unsigned long debounceDelay = 50;    // Tempo de debounce

int pressCount = 0;        // Contador de pressionamentos

void setup() {
  pinMode(buttonPin, INPUT_PULLUP);  // Configura o botão como entrada com resistência pull-up
  pinMode(led1Pin, OUTPUT);          // Configura o LED 1 como saída
  pinMode(led2Pin, OUTPUT);          // Configura o LED 2 como saída
  digitalWrite(led1Pin, LOW);        // Inicializa o LED 1 apagado
  digitalWrite(led2Pin, LOW);        // Inicializa o LED 2 apagado
}

void loop() {
  int reading = digitalRead(buttonPin);  // Lê o estado atual do botão
  
  // Se houve uma mudança de estado do botão (pressionado ou solto)
  if (reading != lastButtonState) {
    lastDebounceTime = millis();  // Reinicia o tempo do debounce
  }
  
  // Se a mudança de estado do botão foi estável por mais que o tempo de debounce
  if ((millis() - lastDebounceTime) > debounceDelay) {
    if (reading == LOW && lastButtonState == HIGH) {  // Quando o botão é pressionado
      pressCount++;  // Aumenta o contador de pressionamentos
      delay(200);    // Delay para evitar múltiplos registros do mesmo pressionamento
    }
  }
  
  // Atualiza o último estado do botão
  lastButtonState = reading;
  
  // Lógica de controle dos LEDs baseada no contador de pressionamentos
  if (pressCount == 1) {
    digitalWrite(led1Pin, HIGH);  // Acende o LED 1
    digitalWrite(led2Pin, LOW);   // Apaga o LED 2
  }
  else if (pressCount == 2) {
    digitalWrite(led1Pin, LOW);   // Apaga o LED 1
    digitalWrite(led2Pin, HIGH);  // Acende o LED 2
  }
  else if (pressCount == 3) {
    digitalWrite(led1Pin, LOW);   // Apaga o LED 1
    digitalWrite(led2Pin, LOW);   // Apaga o LED 2
    pressCount = 0;               // Reseta o contador para o próximo ciclo
  }
}
