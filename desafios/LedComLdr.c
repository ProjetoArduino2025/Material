int led = 4; // define a porta do led
int sensor = A2; // define a porta do sensor
int leitura = 0; // variável de leitura


void setup(){
  pinMode(led, OUTPUT); //define led como SAÍDA
  pinMode(sensor, INPUT); // define sensor como ENTRADA
  Serial.begin(9600); //comunicação serial para Monitor Serial
}


void loop(){
  leitura = analogRead(sensor); // coloca a leitura do sensor em uma variável
  Serial.print ("Leitura atual do sensor: "); // faz um print na tela da mensagem
  Serial.println(leitura); // faz um print na tela do valor
  delay(130); // espera de 130 milissegundos
 
  if (leitura<500){ // condição para caso a leitura seja menor que 500
  digitalWrite(led, HIGH); //ligar o led caso seja verdadeira
  } else {
  digitalWrite(led, LOW); //apagar o led caso seja falsa
  }
}
