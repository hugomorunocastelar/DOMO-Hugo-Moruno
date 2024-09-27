int pin = 13;

void setup() {
  (13, OUTPUT);
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