void setup() {
  // put your setup code here, to run once:
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  delay(1250);
}
unsigned long lastPulse;
bool polarity = 0;

void loop() {
  // put your main code here, to run repeatedly:

  if (millis() - lastPulse > 100)
  {
    if (polarity)
    {
      digitalWrite(8, LOW);
      digitalWrite(6, HIGH);
      lastPulse = millis();
      digitalWrite(7, HIGH);
      delayMicroseconds(100);
      digitalWrite(7, LOW);
      polarity = 0;
    }
    else {
      digitalWrite(6, LOW);
      digitalWrite(8, HIGH);
      lastPulse = millis();
      digitalWrite(5, HIGH);
      delayMicroseconds(100);
      digitalWrite(5, LOW);
      polarity = 1;
    }
  }
  if (millis() - lastPulse > 15)
  {
    if (polarity)
    {
      digitalWrite(8, LOW);
      digitalWrite(6, HIGH);
    }
    else {
      digitalWrite(6, LOW);
      digitalWrite(8, HIGH);
    }

  }
  digitalWrite(4,polarity);

}
