void setup() {
  // put your setup code here, to run once:
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  int d = 1000;
  digitalWrite(4, HIGH);
  delay(d);
  digitalWrite(3, HIGH);
  delay(d);
  digitalWrite(4, LOW);
  digitalWrite(3, LOW);

  digitalWrite(2, HIGH);
  delay(d);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  delay(d);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
}
