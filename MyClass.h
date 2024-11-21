#ifndef MyClass_h
#define MyClass_h


#include "Arduino.h"

class MyClass {
  public:
     MyClass(int pin);
     void myFunction(int blinkRate); // กำหนด วินาที
  private:
     int _pin;
};

#endif
