int photoP = A0;
byte ledP = 2;
byte buzzerP = 7;
int input = 0;
int frequency = 523;

void setup() {
  Serial.begin(9600);
  pinMode(ledP, OUTPUT);
  pinMode(buzzerP, OUTPUT);
}

void loop() {
  input = analogRead(photoP); // 0 - 1023
  Serial.println(input);
  delay(500);

  //light
  if(input >= 500 ){ 
    digitalWrite(ledP, LOW);
    noTone(buzzerP);
  }
  else{
    digitalWrite(ledP, HIGH);
    tone(buzzerP, frequency);
  }
}
