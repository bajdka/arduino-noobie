#define zielona 8
#define czerwona 9
bool zielonaStan = false;
bool czerwonaStan = false;
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

    if (odebraneDane == "zielona") {
      if (zielonaStan == false) {
        digitalWrite(zielona, HIGH);
        zielonaStan = true;
      } else {
        digitalWrite(zielona, LOW);
        zielonaStan = false;
      }    
    }

    if (odebraneDane == "czerwona") {
      if (czerwonaStan == false) {
        digitalWrite(czerwona, HIGH);
        czerwonaStan = true;
      } else {
        digitalWrite(czerwona, LOW);
        czerwonaStan = false;
      }
    }
  }

}
