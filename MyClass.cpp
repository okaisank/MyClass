#include "Arduino.h"
#include "MyClass.h"

// Constructor
MyClass::MyClass(int pin) {
  pinMode(pin, OUTPUT);
  _pin = pin;
}


// ฟังก์ชันกระพริบ LED
void MyClass::myFunction(int blinkRate) {
  digitalWrite(_pin, HIGH);
  delay(blinkRate);
  digitalWrite(_pin, LOW);
  delay(blinkRate);
}


