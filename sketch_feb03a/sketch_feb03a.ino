int analogPin = A0;

void setup() {
  // put your setup code here, to run once:
pinMode(analogPin, INPUT);
pinMode(11,OUTPUT);
Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
int value = analogRead(analogPin);
Serial.println(value);
analogWrite(11, map(value ,0, 1023, 0, 255));
analogWrite(9, map(value ,0, 1023, 255, 0));
}
