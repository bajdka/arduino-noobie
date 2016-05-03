#define ledPin 8

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, INPUT_PULLUP);

  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(10) == LOW) {
    digitalWrite(9, LOW);
    digitalWrite(8, HIGH);
  }
  else {
    digitalWrite(9, HIGH);
    digitalWrite(8, LOW);
    Serial.println("Uwaga! Alarm!");
    while (digitalRead(10) == HIGH) {
      delay(25);
      }
  }
}
