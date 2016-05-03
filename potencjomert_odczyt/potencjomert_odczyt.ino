int odczytanaWartosc = 0;
float napiecie = 0;
 
void setup() {
  Serial.begin(9600);//Uruchomienie komunikacji przez USART
}
 
void loop() {
  odczytanaWartosc = analogRead(A1);//Odczytujemy wartość napięcia
  napiecie = odczytanaWartosc * (5.0/1023.0);
  Serial.println(napiecie);//Wysyłamy ją do terminala
  delay(300);//Czekamy, aby wygodniej odczytywać wyniki  
}
