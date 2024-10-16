int padPin=9;
void setup() {
  // put your setup code here, to run once:
pinMode(padPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(padPin,HIGH);
Serial.println("high");
delay(20000);

digitalWrite(padPin,LOW);
Serial.println("low");
delay(85000);
}
