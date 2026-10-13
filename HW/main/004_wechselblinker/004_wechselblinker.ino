#define LOWED_STM32 D13

void setup() {
  // put your setup code here, to run once:
  pinMode(D12, OUTPUT); 
  pinMode(D13, OUTPUT);                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 
}

void loop() {
  // SOS
  digitalWrite(D12, HIGH);
  digitalWrite(D13, HIGH);   //ENDE
  delay(3500);


  digitalWrite(D12, LOW);
  digitalWrite(D13, LOW);  //*
  delay(500);
  digitalWrite(D12, HIGH);
  digitalWrite(D13, HIGH);   //Pause
  delay(1500);
  digitalWrite(D12, LOW);
  digitalWrite(D13, LOW);  //*
  delay(500);
  digitalWrite(D12, HIGH);
  digitalWrite(D13, HIGH);   //Pause
  delay(1500);
  digitalWrite(D12, LOW);
  digitalWrite(D13, LOW);  //*
  delay(500);
  digitalWrite(D12, HIGH);
  digitalWrite(D13, HIGH);   //Pause
  delay(1500);

  digitalWrite(D12, LOW);
  digitalWrite(D13, LOW);  //_
  delay(1500);
  digitalWrite(D12, HIGH);
  digitalWrite(D13, HIGH);   //Pause
  delay(1500);
  digitalWrite(D12, LOW);
  digitalWrite(D13, LOW);  //_
  delay(1500);
  digitalWrite(D12, HIGH);
  digitalWrite(D13, HIGH);   //Pause
  delay(1500);
  digitalWrite(D12, LOW);
  digitalWrite(D13, LOW);  //_
  delay(1500);
  digitalWrite(D12, HIGH);
  digitalWrite(D13, HIGH);   //Pause
  delay(1500);

  digitalWrite(D12, LOW);
  digitalWrite(D13, LOW);  //*
  delay(500);
  digitalWrite(D12, HIGH);
  digitalWrite(D13, HIGH);   //Pause
  delay(1500);
  digitalWrite(D12, LOW);
  digitalWrite(D13, LOW);  //*
  delay(500);
  digitalWrite(D12, HIGH);
  digitalWrite(D13, HIGH);   //Pause
  delay(1500);
  digitalWrite(D12, LOW);
  digitalWrite(D13, LOW);  //*
  delay(500);
}
