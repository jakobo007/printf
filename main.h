#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <string.h>
int _printf(const char *format, ...);
int char_print(va_list value);
int _putchar(char c);
int string_print(va_list value);
int _strlen(char *str);
int _strlenc(const char *str);
int perc_print(void);
int deci_print(va_list args);
int int_print(va_list args);
#endif