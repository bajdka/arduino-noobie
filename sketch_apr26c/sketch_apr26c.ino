void setup() {
  // put your setup code here, to run once:
  pinMode(7, INPUT_PULLUP);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  digitalWrite(8, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(10, LOW); //Czerwona
  digitalWrite(9, LOW); //Pomarańczowa
  digitalWrite(8, HIGH); //Zielona
 delay(1000);
  while (digitalRead(7) == HIGH) {}
 
  digitalWrite(10, LOW); //Czerwona
  digitalWrite(9, HIGH); //Pomarańczowa
  digitalWrite(8, LOW); //Zielona
  delay(1000);
   while (digitalRead(7) == HIGH) {}
 
  digitalWrite(10, HIGH); //Czerwona
  digitalWrite(9, LOW); //Pomarańczowa
  digitalWrite(8, LOW); //Zielona
 delay(1000);
  while (digitalRead(7) == HIGH) {}
 
  digitalWrite(10, HIGH); //Czerwona
  digitalWrite(9, HIGH); //Pomarańczowa
  digitalWrite(8, LOW); //Zielona
 delay(1000);
  while (digitalRead(7) == HIGH) {}

}
