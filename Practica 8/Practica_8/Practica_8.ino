const int E1 = A0, E2 = A1, E3 = A2, E4 = A3;
const int S1 = 13, S2 = 12, S3 = 11, S4 = 10;

int bS1 = 0, bS2 = 0, bS3 = 0, bS4 = 0;

void setup() {
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);
  
  pinMode(E1, INPUT);
  pinMode(E2, INPUT);
  pinMode(E3, INPUT);
  pinMode(E4, INPUT);
}

void loop() {
  bS1 = digitalRead(E1);
  bS2 = digitalRead(E2);
  bS3 = digitalRead(E3);
  bS4 = digitalRead(E4);
  
// 1100 GIRO IZQ 720°
  if (bS1 == HIGH && bS2 == HIGH && bS3 == LOW && bS4 == LOW) {
    
    digitalWrite(S1, LOW);
    digitalWrite(S2, HIGH);
    digitalWrite(S3, LOW);
    digitalWrite(S4, LOW);
  }
// 0010 GIRO DER 180°
  else if (bS1 == LOW && bS2 == LOW && bS3 == HIGH && bS4 == LOW) {
    
    digitalWrite(S1, LOW);
    digitalWrite(S2, HIGH);
    digitalWrite(S3, LOW);
    digitalWrite(S4, LOW);
  }
// 0101 GIRO IZQ 270°
  else if (bS1 == LOW && bS2 == HIGH && bS3 == LOW && bS4 == HIGH) {
    
    digitalWrite(S1, LOW);
    digitalWrite(S2, HIGH);
    digitalWrite(S3, LOW);
    digitalWrite(S4, LOW);
  }
// 1111 GIRO DER 45°
  else if (bS1 == HIGH && bS2 == HIGH && bS3 == HIGH && bS4 == HIGH) {
    
    digitalWrite(S1, LOW);
    digitalWrite(S2, HIGH);
    digitalWrite(S3, LOW);
    digitalWrite(S4, LOW);
  }
// OFF
else {
    digitalWrite(S1, LOW);
    digitalWrite(S2, LOW);
    digitalWrite(S3, LOW);
    digitalWrite(S4, LOW);
  }
}
