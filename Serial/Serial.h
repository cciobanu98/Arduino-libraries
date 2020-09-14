#ifndef SERIAL_H
#define SERIAL_H

#include <Arduino.h>
#include <stdio.h>

int serial_putChar(char ch, FILE *f);
int serial_getChar(FILE *f);
void setStream();

#endif
