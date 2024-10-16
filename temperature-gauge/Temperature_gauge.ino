/**************************************************************************/
/*!
This is a demo for the Adafruit MCP9808 breakout
----> http://www.adafruit.com/products/1782
Adafruit invests time and resources providing this open source code,
please support Adafruit and open-source hardware by purchasing
products from Adafruit!
*/
/**************************************************************************/

#include <Wire.h>
#include "Adafruit_MCP9808.h"
const int ledPinR = 12;
const int ledPinG = 13;
const int ledPinY = 11;
const int ledPinW = 10;
// Create the MCP9808 temperature sensor object
Adafruit_MCP9808 tempsensor = Adafruit_MCP9808();

void setup() {
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  pinMode(ledPinY, OUTPUT);
  pinMode(ledPinW, OUTPUT);
  Serial.begin(9600);
  Serial.println("MCP9808 demo");
  
  // Make sure the sensor is found, you can also pass in a different i2c
  // address with tempsensor.begin(0x19) for example
  if (!tempsensor.begin()) {
    Serial.println("Couldn't find MCP9808!");
    while (1);
  }
}

void loop() {
  Serial.println("wake up MCP9808.... "); // wake up MSP9808 - power consumption ~200 mikro Ampere

  tempsensor.shutdown_wake(0);   // Don't remove this line! required before reading temp

  // Read and print out the temperature, then convert to *F
  float c = tempsensor.readTempC();
  float f = c * 9.0 / 5.0 + 32;
  Serial.print("Temp: "); Serial.print(c); Serial.print("*C\t"); 
  Serial.print(f); Serial.println("*F");
  delay(250);
 if (f>70 && f < 80){
      Serial.println("in loop 1");
      digitalWrite(ledPinG, HIGH);
      digitalWrite(ledPinR, LOW);
      digitalWrite(ledPinY, LOW);
      digitalWrite(ledPinW, LOW);
    }
    
    
   else if (f>80 && f < 90){
    Serial.println("in loop 2");
      digitalWrite(ledPinY, HIGH);
      digitalWrite(ledPinR, LOW);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinW, LOW);
    }
    
    else if (f>90){
      Serial.println("in loop 3");
      digitalWrite(ledPinR, HIGH);
      digitalWrite(ledPinG, LOW);
      digitalWrite(ledPinY, LOW);
      digitalWrite(ledPinW, LOW);
    }
    
    else {
      Serial.println("in loop 4");
      digitalWrite(ledPinW, HIGH);
      digitalWrite(ledPinR, LOW);
      digitalWrite(ledPinY, LOW);
      digitalWrite(ledPinG, LOW);
    }
    
  Serial.println("Shutdown MCP9808.... ");
  tempsensor.shutdown_wake(1); // shutdown MSP9808 - power consumption ~0.1 mikro Ampere
  
  delay(2000);
}
