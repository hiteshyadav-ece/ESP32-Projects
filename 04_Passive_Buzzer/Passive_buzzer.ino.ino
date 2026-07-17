const int buzzerPin = 25;

void setup()
{
  ledcAttach(buzzerPin, 2000, 8);
}

void loop()
{
  ledcWriteTone(buzzerPin, 1000);
  delay(500);

  ledcWriteTone(buzzerPin, 0);
  delay(500);
}