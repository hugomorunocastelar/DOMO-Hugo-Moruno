


void setup() {
  // put your setup code here, to run once:
  int pin = 13;
}

void loop() {
  // put your main code here, to run repeatedly:
  bucleLed(pin);
}

bucleLed(codigo) {
  digitalWrite(codigo, HIGH);
  delay(500);
  digitalWrite(codigo, LOW);
  delay(500);
}