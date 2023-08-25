#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>


int (*switcher(char ch))(va_list);
int myputchar(int x, int count);
int _putchar(char c);
int _printf(const char *format,...);
int _char(va_list args);
int _string(va_list args);
int _decimal(va_list args);

#endif
