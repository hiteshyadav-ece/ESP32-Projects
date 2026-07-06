const int potPin =34;
void setup()
{
  Serial.begin(115200);

}
void loop(){
  int sensorvalue = analogRead(potPin);
  Serial.print("Potentiometer Value");
  Serial.println(sensorvalue);
}