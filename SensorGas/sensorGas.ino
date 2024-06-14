// C++ code
//
void setup()
{
  pinMode(A2, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
}

void loop()
{
  if (analogRead(A2) < 161) {
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    delay(1000); 
    if (analogRead(A2) >= 161) {
      digitalWrite(3, HIGH);
      digitalWrite(2, LOW);
      delay(1000); 
    }
  }
}