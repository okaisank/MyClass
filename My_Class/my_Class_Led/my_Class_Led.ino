#include <MyClass.h>


MyClass redLED(13);     // Object
MyClass greenLED(12); // Object

void setup() {
  
 // empty 
}

void loop() {
  redLED.myFunction(1000);
  greenLED.myFunction(2000);


}
