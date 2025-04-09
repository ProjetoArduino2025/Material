int vermelho = 13; // define a porta do led vermelho
int amarelo = 12; // define a porta do led amarelo
int verde = 11; // define a porta do led verde


void setup(){
  pinMode(vermelho, OUTPUT); //define led como SAÍDA
  pinMode(amarelo, OUTPUT); //define led como SAÍDA
  pinMode(verde, OUTPUT); //define led como SAÍDA
}


void loop(){
  digitalWrite(verde, HIGH); // coloca a escrita do led (LIGADO)
  delay(5000); // espera de 5000 milissegundos
  digitalWrite(verde, LOW); // coloca a escrita do led (DESLIGADO)
  delay(1000); // espera de 1000 milissegundos
  digitalWrite(amarelo, HIGH); // coloca a escrita do led (LIGADO)
  delay(2000); // espera de 2000 milissegundos
  digitalWrite(amarelo, LOW); // coloca a escrita do led (DESLIGADO)
  delay(1000); // espera de 1000 milissegundos
  digitalWrite(vermelho, HIGH); // coloca a escrita do led (LIGADO)
  delay(5000); // espera de 5000 milissegundos
  digitalWrite(vermelho, LOW); // coloca a escrita do led (DESLIGADO)
  delay(1000); // espera de 1000 milissegundos
}
