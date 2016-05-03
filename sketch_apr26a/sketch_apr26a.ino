void setup() {
  // put your setup code here, to run once:
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
    digitalWrite(8, HIGH); //wlaczam diode
    digitalWrite(7, LOW); //wylaczam zielona diode
    delay(500); //0.5 sek opoznienia
    digitalWrite(8, LOW); //wylaczam czerwona diode
    digitalWrite(7, HIGH); //wlaczam zielona diode
    delay(500); //0.5 sek opoznienia

}
