int botao = 8; // declara o botão na porta 8
int led = 13; // declara led na porta 13


void setup(){
  pinMode(botao, INPUT_PULLUP); // define o pino do botão como entrada
  pinMode(led, OUTPUT);// define LED como saída
}


void loop(){
  if (digitalRead(botao) == LOW) // condicional para ver se o botão está pressionado
  {
    digitalWrite(led, HIGH); // liga o led
    delay(1000);  // por 1 segundo
    digitalWrite(led, LOW); // desliga o led
    delay(1000);  // por 1 segundo
  }
}
