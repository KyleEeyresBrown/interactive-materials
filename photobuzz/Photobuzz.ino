const int photo =6;//the photo pin
int sensorValue = 0;
const int buzz=7;
void setup () {
  pinMode (buzz, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
sensorValue = digitalRead(photo);
Serial.println(sensorValue);
if (sensorValue = 1){
  tone(buzz, 800);}
else {
  tone(buzz, 5000);}
}
