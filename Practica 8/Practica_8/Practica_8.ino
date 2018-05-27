const int E1 = A0, E2 = A1, E3 = A2, E4 = A3;
const int S1 = 13, S2 = 12, S3 = 11, S4 = 10;
const int R = 5;

int bS1 = 0, bS2 = 0, bS3 = 0, bS4 = 0;
int contador = 0, i=0;
void setup() {
  pinMode(S1, OUTPUT);
  pinMode(S2, OUTPUT);
  pinMode(S3, OUTPUT);
  pinMode(S4, OUTPUT);
  
  pinMode(E1, INPUT);
  pinMode(E2, INPUT);
  pinMode(E3, INPUT);
  pinMode(E4, INPUT);

  Serial.begin(9600);
}

void loop() {
  bS1 = digitalRead(E1);
  bS2 = digitalRead(E2);
  bS3 = digitalRead(E3);
  bS4 = digitalRead(E4);
  
// 1100 GIRO IZQ 720°   REVISAR LAS VUELTAS QUE REALIZA
  if (bS1 == HIGH && bS2 == HIGH && bS3 == LOW && bS4 == LOW) {
    if (i<=1048){
      digitalWrite(S1, LOW);
      digitalWrite(S2, HIGH);
      digitalWrite(S3, LOW);  
      digitalWrite(S4, HIGH);  
      delay(R); 
      digitalWrite(S1, HIGH); 
      digitalWrite(S2, LOW);
      digitalWrite(S3, LOW);
      digitalWrite(S4, HIGH);
      delay(R); 
      digitalWrite(S1, HIGH); 
      digitalWrite(S2, LOW);  
      digitalWrite(S3, HIGH);
      digitalWrite(S4, LOW);
      delay(R); 
      digitalWrite(S1, LOW);
      digitalWrite(S2, HIGH);  
      digitalWrite(S3, HIGH);  
      digitalWrite(S4, LOW);
      delay(R);
    }
    i++;
    Serial.println(i);
  }
// 0010 GIRO DER 180°
  else if (bS1 == LOW && bS2 == LOW && bS3 == HIGH && bS4 == LOW) {
    if (i<=262){
      digitalWrite(S1, LOW); 
      digitalWrite(S2, LOW);  
      digitalWrite(S3, HIGH);  
      digitalWrite(S4, HIGH);  
      delay(R); 
      digitalWrite(S1, LOW); 
      digitalWrite(S2, HIGH);  
      digitalWrite(S3, HIGH);  
      digitalWrite(S4, LOW);  
      delay(R); 
      digitalWrite(S1, HIGH); 
      digitalWrite(S2, HIGH);  
      digitalWrite(S3, LOW);  
      digitalWrite(S4, LOW);  
      delay(R); 
      digitalWrite(S1, HIGH); 
      digitalWrite(S2, LOW);  
      digitalWrite(S3, LOW);  
      digitalWrite(S4, HIGH);  
      delay(R);
    }
    i++;
    Serial.println(i);
  }
// 0101 GIRO IZQ 270°
  else if (bS1 == LOW && bS2 == HIGH && bS3 == LOW && bS4 == HIGH) {
    if (i<=393){
      digitalWrite(S1, LOW);
      digitalWrite(S2, HIGH);
      digitalWrite(S3, LOW);  
      digitalWrite(S4, HIGH);  
      delay(R); 
      digitalWrite(S1, HIGH); 
      digitalWrite(S2, LOW);
      digitalWrite(S3, LOW);
      digitalWrite(S4, HIGH);
      delay(R); 
      digitalWrite(S1, HIGH); 
      digitalWrite(S2, LOW);  
      digitalWrite(S3, HIGH);
      digitalWrite(S4, LOW);
      delay(R); 
      digitalWrite(S1, LOW);
      digitalWrite(S2, HIGH);  
      digitalWrite(S3, HIGH);  
      digitalWrite(S4, LOW);
      delay(R);
    }
    i++;
    Serial.println(i);
  }
// 1111 GIRO DER 45°
  else if (bS1 == HIGH && bS2 == HIGH && bS3 == HIGH && bS4 == HIGH) {
    if (i<=65){
      digitalWrite(S1, LOW); 
      digitalWrite(S2, LOW);  
      digitalWrite(S3, HIGH);  
      digitalWrite(S4, HIGH);  
      delay(R); 
      digitalWrite(S1, LOW); 
      digitalWrite(S2, HIGH);  
      digitalWrite(S3, HIGH);  
      digitalWrite(S4, LOW);  
      delay(R); 
      digitalWrite(S1, HIGH); 
      digitalWrite(S2, HIGH);  
      digitalWrite(S3, LOW);  
      digitalWrite(S4, LOW);  
      delay(R); 
      digitalWrite(S1, HIGH); 
      digitalWrite(S2, LOW);  
      digitalWrite(S3, LOW);  
      digitalWrite(S4, HIGH);  
      delay(R);
    }
    i++;
    Serial.println(i);
  }
// OFF
else {
    i=0;
  }
}
