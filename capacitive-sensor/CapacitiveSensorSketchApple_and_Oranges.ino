#include <CapacitiveSensor.h>
int ledPinA = 12;
int ledPinO = 13;
CapacitiveSensor   cs_4_2 = CapacitiveSensor(4,2);        // 10M resistor between pins 4 & 2, pin 2 is sensor pin, add a wire and or foil if desired
CapacitiveSensor   cs_4_8 = CapacitiveSensor(4,8);        // 10M resistor between pins 4 & 8, pin 8 is sensor pin, add a wire and or foil

void setup()                    
{
    pinMode(ledPinO, OUTPUT);
    pinMode(ledPinA, OUTPUT);
   Serial.begin(9600);
}

void loop()                    
{
  
    long total1 =  cs_4_2.capacitiveSensor(30);
    long total3 =  cs_4_8.capacitiveSensor(30);

    Serial.println(total1);                  // print sensor output 1
    Serial.println(total3);                // print sensor output 3

    delay(500);                             // arbitrary delay to limit data to serial port 
    
       if (total1 > 400){
      digitalWrite(ledPinO, HIGH);
      delay(50);
    }else{
      digitalWrite(ledPinO, LOW);
       delay(50);
    }
          if (total3 > 400){
      digitalWrite(ledPinA, HIGH);
       delay(50);
    }else{
      digitalWrite(ledPinA, LOW);
       delay(50);
    }
   
}
