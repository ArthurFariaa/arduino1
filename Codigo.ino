// C++ code
//
void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);

}

void loop()
{
  delay(30); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(30); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
  Serial.println("dfhudhfhaodhf");
}