#include "main.h"
/**
 * char_print - prints characters
 * @value: argument
 * Return: 1
*/
int char_print(va_list value)
{
    char str;
    str = va_arg(value, int);
    _putchar(str);
    return (1);
}