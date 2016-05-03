void setup() {
  pinMode(8, OUTPUT); //Dioda jako wyjście
  pinMode(7, INPUT_PULLUP); //Przycisk jako wejście
  digitalWrite(8, LOW); //Wyłączenie diody
}
 
void loop()
{
  if (digitalRead(7) == LOW) { //Jeśli przycisk wciśnięty
    digitalWrite(8, HIGH); //Włącz diodę
    delay(5000);
    digitalWrite(8, LOW);
  }
}
