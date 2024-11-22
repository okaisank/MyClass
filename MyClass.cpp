#include "Arduino.h"
#include "MyClass.h"

// Constructor
MyClass::MyClass(int pin) {
  pinMode(pin, OUTPUT);
  _pin = pin;
  _buttonState = LOW; // กำหนดค่าเริ่มต้น Pull-Down use Resistor 4RK = 4.7K Or 10K
}

// ฟังก์ชันตั้งค่า pushbutton
void MyClass::setButtonPin(int buttonPin) {
  pinMode(buttonPin, INPUT_PULLDOWN);// Thise circuit use Pull Down of status 0 , ตรงข้ามถ้าใช้ INPUT_PULLUP status 1.
  _buttonPin = buttonPin; // เก็บค่าขา Pin ของปุ่ม
}

// ฟังก์ชันกระพริบ LED
void MyClass::myFunction(int blinkRate) {
  digitalWrite(_pin, HIGH);
  delay(blinkRate);
  digitalWrite(_pin, LOW);
  delay(blinkRate);
}

// ฟังก์ชันทำงานเมื่อปุ่มถูกกด
void MyClass::myButtonFunction() {
  _buttonState = digitalRead(_buttonPin); // อ่านสถานะปุ่ม
  if (_buttonState == HIGH) {
    // เปิด LED
    digitalWrite(_pin, HIGH);
  } else {
    // ปิด LED
    digitalWrite(_pin, LOW);
  }
}
