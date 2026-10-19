void setup() {
  // put your setup code here, to run once:
  pinMode(D13, OUTPUT);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
}

void loop() {
  // SOS
  s_blink();
  delay(250);
  o_blink();
  delay(250);
  s_blink();
  delay(1000);
}