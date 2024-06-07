int pot = A0; //declarando uma variável

void setup() {
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop() {
  //pot = analogRead(A0); //leitura de sinal analógico
  pot = digitalRead(A0); //leitura de sinal digital
  Serial.print("valores do potenciometro: ");
  Serial.println(pot);
}