const int E1 = A0, E2 = A1, E3 = A2, E4 = A3, E5 = A4;
const int a=11, b=10, c=7, d=8, e=9, f=12, g=13, h=6;

int bS1 = 0, bS2 = 0, bS3 = 0, bS4 = 0, bS5 = 0;

void setup() {
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  
  pinMode(E1, INPUT);
  pinMode(E2, INPUT);
  pinMode(E3, INPUT);
  pinMode(E4, INPUT);
  pinMode(E5, INPUT);
}

void loop() {
  bS1 = digitalRead(E1);
  bS2 = digitalRead(E2);
  bS3 = digitalRead(E3);
  bS4 = digitalRead(E4);
  bS5 = digitalRead(E5);
  
// 10011
  if (bS1 == HIGH && bS2 == LOW && bS3 == LOW && bS4 == HIGH && bS5 == HIGH) {
    //CINCO
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, HIGH);
  }
// 10100
  else if (bS1 == HIGH && bS2 == LOW && bS3 == HIGH && bS4 == LOW && bS5 == LOW) {
    //CUATRO
    digitalWrite(a, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, HIGH);
  }
 // 10101
  else if (bS1 == HIGH && bS2 == LOW && bS3 == HIGH && bS4 == LOW && bS5 == HIGH) {
    //OCHO
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, HIGH);
  }
//################################################################################  
// 11100
  else if (bS1 == HIGH && bS2 == HIGH && bS3 == HIGH && bS4 == LOW && bS5 == LOW) {
    //SEIS
    digitalWrite(a, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(c, LOW);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, LOW);
    digitalWrite(g, LOW);
    digitalWrite(h, HIGH);
  }
// 11101
  else if (bS1 == HIGH && bS2 == HIGH && bS3 == HIGH && bS4 == LOW && bS5 == HIGH) {
    //DOS
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, HIGH);
    digitalWrite(d, LOW);
    digitalWrite(e, LOW);
    digitalWrite(f, HIGH);
    digitalWrite(g, LOW);
    digitalWrite(h, HIGH);
  }
// 11110
  else if (bS1 == HIGH && bS2 == HIGH && bS3 == HIGH && bS4 == HIGH && bS5 == LOW) {
    //SIETE
    digitalWrite(a, LOW);
    digitalWrite(b, LOW);
    digitalWrite(c, LOW);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(h, HIGH);
  }  
//////////////////////////////////////////////////////////////////////////////////
  else {          // OFF
    digitalWrite(a, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(c, HIGH);
    digitalWrite(d, HIGH);
    digitalWrite(e, HIGH);
    digitalWrite(f, HIGH);
    digitalWrite(g, HIGH);
    digitalWrite(h, HIGH);
  }
}
