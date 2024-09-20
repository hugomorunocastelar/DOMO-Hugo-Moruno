int pinRojo = 13;
int pinVerde = 12;

void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
  // put your main code here, to run repeatedly:
  unsigned long contador = millis();
  /*bucleLedRojo(pinRojo);
  bucleLedVerde(pinVerde);*/
  if (contador%2 != 0 && contador%500 = 0)
    digitalWrite(codigo, HIGH);
  else
    digitalWrite(codigo, LOW);

  if (contador%2 != 0 && contador%1000 = 0)
    digitalWrite(codigo, HIGH);
  else
    digitalWrite(codigo, LOW);
}

void bucleLedRojo(int codigo) {
  digitalWrite(codigo, HIGH);
  delay(500);
  digitalWrite(codigo, LOW);
  delay(500);
}

void bucleLedVerde(int codigo) {
  digitalWrite(codigo, HIGH);
  delay(1000);
  digitalWrite(codigo, LOW);
  delay(1000);
}