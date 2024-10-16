int flowPin = 4;
void setup() {
  pinMode(flowPin, OUTPUT);

}

void loop() {
  digitalWrite(flowPin, HIGH);
  delay(360000);
  digitalWrite(flowPin, LOW);
  delay(258840000);
}
