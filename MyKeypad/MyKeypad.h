#ifndef MY_KEYPAD_H_
#define MY_KEYPAD_H_

#include <stdio.h>
#include <Keypad.h>
#include <Serial.h>

class MyKeypad {
  
  private:
    Keypad *keypad;
    
  public:
  
    MyKeypad(byte rows[4], byte col[4]);

    void init();
    char getKey();
};

#endif