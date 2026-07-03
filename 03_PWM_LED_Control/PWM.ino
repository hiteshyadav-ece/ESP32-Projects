const int potPin = 34;
const int ledPin = 2;

void setup()
{
  Serial.begin(115200);

  // Attach LED pin to PWM
  ledcAttach(ledPin, 5000, 8);
}

void loop()
{
  int sensorValue = analogRead(potPin);

  int brightness = map(sensorValue, 0, 4095, 0, 255);

  ledcWrite(ledPin, brightness);

  Serial.print("ADC = ");
  Serial.print(sensorValue);

  Serial.print("  Brightness = ");
  Serial.println(brightness);

  delay(20);
}
