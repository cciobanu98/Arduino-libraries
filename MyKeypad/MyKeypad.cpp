#include "MyKeypad.h"

char hexaKeys[4][4] = {
  {'1', '2', '3', '%'},
  {'4', '5', '6', '*'},
  {'7', '8', '9', '-'},
  {'n', '0', '=', '+'}
};

MyKeypad::MyKeypad(byte rows[4], byte col[4])
{
    keypad = new Keypad(makeKeymap(hexaKeys), rows, col, 4, 4);
}

char MyKeypad::getKey()
{
    return keypad->getKey();
}