#include "Button.h"

Button::Button(byte pin) {
  this->pin = pin;
  init();
}

void Button::init() {
  pinMode(pin, INPUT);
}

bool Button::isPressed() {
    return digitalRead(pin) == HIGH;    
}

int Button::state() {
    return digitalRead(pin);
}