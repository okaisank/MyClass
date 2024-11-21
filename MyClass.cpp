//ส่วน Constructor

#include "Arduino.h"
#include "MyClass.h"

MyClass::MyClass(int pin){
  pinMode(pin, OUTPUT);
  _pin = pin;
}

void MyClass::myFunction(int blinkRate){
  digitalWrite(_pin, HIGH);
  delay(blinkRate);
  digitalWrite(_pin, LOW);
  delay(blinkRate);
}
