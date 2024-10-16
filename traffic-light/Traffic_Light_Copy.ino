/*
  Button

 Turns on and off a light emitting diode(LED) connected to digital
 pin 13, when pressing a pushbutton attached to pin 2.


 The circuit:
 * LED attached from pin 13 to ground
 * pushbutton attached to pin 2 from +5V
 * 10K resistor attached to pin 2 from ground

 * Note: on most Arduinos there is already an LED on the board
 attached to pin 13.


 created 2005
 by DojoDave <http://www.0j0.org>
 modified 30 Aug 2011
 by Tom Igoe

 This example code is in the public domain.

 http://www.arduino.cc/en/Tutorial/Button
 */

// constants won't change. They're used here to
// set pin numbers:
const int buttonPin = 2;     // the number of the pushbutton pin
const int Green =  13;      // the number of the LED pin
const int Red = 12;
const int Yellow = 11;
const int buttonPin1 = 3;
const int Green2 =  8;      // the number of the LED pin
const int Red2 = 9;
const int Yellow2 = 10;
const int buttonPin2 = 1;
const int Green3 =  7;      // the number of the LED pin
const int Red3 = 6;
const int Yellow3 = 5;

// variables will change:

int buttonState2 = 0;
int buttonState = 0; // variable for reading the pushbutton status
int buttonState1 = 0;

void setup() {
  Serial.begin(9600);
  // initialize the LED pin as an output:
  pinMode(Yellow, OUTPUT);
  pinMode(Red, OUTPUT);
  pinMode(Green, OUTPUT);
  
  pinMode(Green2, OUTPUT);
  pinMode(Red2, OUTPUT);
  pinMode(Yellow2, OUTPUT);
  
   pinMode(Green3, OUTPUT);
  pinMode(Red3, OUTPUT);
  pinMode(Yellow3, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  pinMode(buttonPin1, INPUT);
  pinMode(buttonPin2, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
 
  buttonState2 = digitalRead(buttonPin2);
  buttonState = digitalRead(buttonPin);
  buttonState1 = digitalRead(buttonPin1);

if (buttonState1 == HIGH) {
    // turn LED on:
    Serial.println("on");
    digitalWrite(Red2, LOW);
    digitalWrite(Green2, HIGH);
    delay (10000);
    digitalWrite(Green2, LOW);
    digitalWrite(Yellow2, HIGH);
    delay (5000);
    
  } else {
    // turn LED off:
    digitalWrite(Green2, LOW);
    digitalWrite(Red2, HIGH);
    digitalWrite(Yellow2, LOW);
  }
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(Red3, LOW);
    digitalWrite(Green3, HIGH);
    delay (10000);
    digitalWrite(Green3, LOW);
    digitalWrite(Yellow3, HIGH);
    delay (5000);
    
  } else {
    // turn LED off:
    digitalWrite(Green3, LOW);
    digitalWrite(Red3, HIGH);
    digitalWrite(Yellow3, LOW);
  }
   if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(Red, LOW);
    digitalWrite(Green, HIGH);
    delay (10000);
    digitalWrite(Green, LOW);
    digitalWrite(Yellow, HIGH);
    delay (5000);
    
  } else {
    // turn LED off:
    digitalWrite(Green, LOW);
    digitalWrite(Red, HIGH);
    digitalWrite(Yellow, LOW);

  // check if the pushbutton is pressed.
  // if it is, the buttonState is HIGH:
  

 
  }

  
