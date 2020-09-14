#include "Serial.h"

int serial_putChar(char ch, FILE *f)
{
  return Serial.write(ch);   
}

int serial_getChar(FILE *f)
{
  while(!Serial.available());
  return Serial.read();
}

void setStream()
{
   FILE *my_stream = fdevopen(serial_putChar, serial_getChar);
   stdin = stdout = my_stream ;
}