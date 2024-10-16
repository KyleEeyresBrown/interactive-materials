int padPin = 9;
int switchPin = 2;
void setup() {
  // put your setup code here, to run once:
pinMode(padPin, OUTPUT);
pinMode(switchPin, INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
while(digitalRead(switchPin) == HIGH) {
  digitalWrite(padPin, LOW);
  Serial.println("low");
 
}
digitalWrite(padPin, HIGH);
Serial.println("high");
}
