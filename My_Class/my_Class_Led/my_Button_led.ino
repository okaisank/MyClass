/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from redLED,greenLED to ground

  Pull-Down
  - pushbutton attached to pin 2 from +5V
  - 4K7 or 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to redLED,greenLED.

  created 2024
  by Engineering Syndrome
  modified 22 Nov 2024
  by JOe Vohan

  This example code is in Github.

  https://github.com/okaisank/MyClass
*/


#include <MyClass.h>

MyClass button (2);
MyClass redLED(13);     // Object
MyClass greenLED(12); // Object

void setup() {
  
 // empty 
}

void loop() {

  button.myButtonFunction();
  redLED.myFunction(1000);
  greenLED.myFunction(2000);
  

}
