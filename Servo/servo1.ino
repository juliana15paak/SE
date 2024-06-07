#include<Servo.h> //importando biblioteca Servo

int pot = A0;
Servo motor1; //instanciando o objeto motor

void setup() {
  motor1.attach(2); //prendendo o motor na porta 2
  motor1.write(0); //para motor começar na posição 0
  Serial.begin(9600); //iniciando a com Serial
}

void loop() {
  pot = analogRead(A0); //escutando porta analógica
  motor1.write(pot); //definindo posição do motor em graus
  Serial.println(pot); //imprimindo valor = Potenciômetro
}