// C++ code
//

void setup()
{
  pinMode(A4, INPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  if (digitalRead(A4) == HIGH) {
    digitalWrite(2, HIGH);
  }
  if (digitalRead(A4) == LOW) {
    digitalWrite(2, LOW);
  }
  delay(10); // Delay a little bit to improve simulation performance
}