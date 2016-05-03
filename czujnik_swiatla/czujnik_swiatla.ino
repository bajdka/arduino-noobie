int odczytanaWartosc = 0; //Zmienna do przechowywania odczytu ADC
int prog = 0;

void setup() {
  Serial.begin(9600);
}
 
void loop() {
  odczytanaWartosc = analogRead(A5);//Odczytanie wartości z ADC
  Serial.println(odczytanaWartosc);  
  delay(500);
}
