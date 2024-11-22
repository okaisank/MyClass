#ifndef MyClass_h
#define MyClass_h

#include "Arduino.h"

class MyClass {
  public:
     MyClass(int pin);
    // ฟังก์ชันกระพริบ LED
    void myFunction(int blinkRate); // กำหนดอัตราการกระพริบ (ms)

    // ฟังก์ชันสำหรับปุ่มกด
    void setButtonPin(int buttonPin); // กำหนดขา Pin สำหรับปุ่ม
    void myButtonFunction();         // ควบคุม LED ตามสถานะปุ่ม
  private:
     int _pin;
	 int _buttonPin ;
	 int _buttonState;   // สถานะของปุ่ม (HIGH หรือ LOW)
};

#endif
