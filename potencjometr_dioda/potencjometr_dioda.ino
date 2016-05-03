int odczytanaWartosc = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  odczytanaWartosc = analogRead(A1);
  digitalWrite(2, HIGH);
  delay(odczytanaWartosc);
  digitalWrite(2, LOW);
  delay(odczytanaWartosc);
}
