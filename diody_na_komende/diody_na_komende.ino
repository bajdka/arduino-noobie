#define zielona 8
#define czerwona 9

String odebraneDane = "";

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(zielona, OUTPUT);
  pinMode(czerwona, OUTPUT);

  digitalWrite(zielona, LOW);
  digitalWrite(czerwona, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available () > 0) {
    odebraneDane = Serial.readStringUntil('\n');

    while (odebraneDane == "zielona") {
      digitalWrite(zielona, HIGH);
      delay(1000);
      digitalWrite(zielona, LOW);
      delay(1000);
    }

    while (odebraneDane == "czerwona") {
      digitalWrite(czerwona, HIGH);
      delay(1000);
      digitalWrite(czerwona, LOW);
      delay(1000);
    }
  }

}
