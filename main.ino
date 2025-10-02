// Definition der Pins, die mit dem A4988 verbunden sind
const int stepPin = 2; 
const int dirPin = 3;

void setup() {
  // Setzt die beiden Pins als Ausgänge
  pinMode(stepPin, OUTPUT);
  pinMode(dirPin, OUTPUT);

}

void loop() {


  // Richtung auf "im Uhrzeigersinn" setzen (Annahme)
  digitalWrite(dirPin, HIGH); 
  // Eine volle Umdrehung machen (200 Schritte für einen 1.8° Motor)
  for(int x = 0; x < 1000; x++) {
    digitalWrite(stepPin, HIGH);   // Impuls starten
    delayMicroseconds(4000);        // Dauer des Impulses (und halbe Pause)
    digitalWrite(stepPin, LOW);    // Impuls beenden
    delayMicroseconds(4000);        // Pause zwischen den Impulsen
  }
  delay(1000);


  // Richtung auf "im Uhrzeigersinn" setzen (Annahme)
  digitalWrite(dirPin, LOW); 
  // Eine volle Umdrehung machen (200 Schritte für einen 1.8° Motor)
  for(int x = 0; x < 1000; x++) {
    digitalWrite(stepPin, HIGH);   // Impuls starten
    delayMicroseconds(400);        // Dauer des Impulses (und halbe Pause)
    digitalWrite(stepPin, LOW);    // Impuls beenden
    delayMicroseconds(400);        // Pause zwischen den Impulsen
  }
  delay(1000);
}
