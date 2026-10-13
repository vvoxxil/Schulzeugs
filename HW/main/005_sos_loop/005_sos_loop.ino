void setup() {
  // put your setup code here, to run once:
  pinMode(D10, OUTPUT); 
  pinMode(D11, OUTPUT); 
  pinMode(D12, OUTPUT); 
  pinMode(D13, OUTPUT);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
}

void loop() {
  // SOS
  digitalWrite(D10, LOW);
  delay(250);
  digitalWrite(D11, LOW);
  delay(250);
  digitalWrite(D12, LOW);
  delay(250);
  digitalWrite(D13, LOW);
  delay(250);
  digitalWrite(D10, HIGH);
  digitalWrite(D11, HIGH);
  digitalWrite(D12, HIGH);
  digitalWrite(D13, HIGH);
  delay(250);
}
