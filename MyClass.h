#ifndef MyClass_h
#define MyClass_h

#include "Arduino.h"

class MyClass {
  public:
     MyClass(int pin);
    // ฟังก์ชันกระพริบ LED
    void myFunction(int blinkRate); // กำหนดอัตราการกระพริบ (ms)

  private:
     int _pin;
	 int _buttonPin ;
};

#endif
