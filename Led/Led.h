#ifndef LED_H
#define LED_H
#include <Arduino.h>
#include <stdio.h>
class Led {
  
  private:
    byte pin;
    
  public:
  
    Led(byte pin);

    void init();
    void on();
    void off();
    void toggle();
};
#endif