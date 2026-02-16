//this code make a sapmely SINUS wave
int buzzer = 23;
int frekans = 5000;
void setup() {
  Serial.begin(115200);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  tone(buzzer, frekans);
  Serial.println(frekans);
  delay(5000);

  frekans = 10000;
  tone(buzzer, frekans);
  Serial.println(frekans);
  delay(5000);

  frekans = 20000;
  tone(buzzer, frekans);
  Serial.println(frekans);
  delay(5000);
}

