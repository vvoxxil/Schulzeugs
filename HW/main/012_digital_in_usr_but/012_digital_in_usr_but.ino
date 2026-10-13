const int buttonPin = 23;  // Pin für die onboeard Taste B1 (pin23)
char buttonState = 0;      // Variable für den Zustand der Taste
const int LED = 13; // Pin ffür die onboard LED LD2

void setup() {
  Serial.begin(9600);     // Serielle Kommunikation starten
  pinMode(buttonPin, INPUT);  // Pin D23 als Eingang festlegen
  pinMode(LED, OUTPUT); // Pin D13 als Ausgang
}

void loop() {
  

buttonState = digitalRead(buttonPin);
Serial.println((int)buttonState);

  delay(500);

  if (buttonState == 0) {
    digitalWrite(LED, HIGH);
    delay(250);  // Kurze Verzögerung, um das Polling zu verlangsamen
    digitalWrite(LED, LOW);
    delay(125);
    digitalWrite(LED, HIGH);
    delay(250);  // Kurze Verzögerung, um das Polling zu verlangsamen
    digitalWrite(LED, LOW);
  }
}