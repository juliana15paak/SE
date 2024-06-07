// C++ code
//
void setup()
{
  pinMode(7, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{

  digitalWrite(7, HIGH); //verde acende (carro)
  digitalWrite(2, HIGH); //vermelho acende (pedestre)
  delay(2000); // Wait for 2000 millisecond(s)
  digitalWrite(7, LOW); //verde apaga (carro)
  digitalWrite(6, HIGH); //amarelo acende (carro)
  delay(2000); 
  digitalWrite(6, LOW); //amarelo apaga (carro)
  digitalWrite(2, LOW); //vermelho apaga (pedestre)
  digitalWrite(4, HIGH); //vermelho acende (carro)
    digitalWrite(3, HIGH); //verde acende (pedestre)
  delay(2000); 
  digitalWrite(4, LOW);
   digitalWrite(3, LOW);
}