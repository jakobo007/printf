#include "main.h"
/**
 * string_print - print a string
 * @value: argument
 * Return: length of string
*/

int string_print(va_list value)
{
    char *str;
    int i;
    int length;

    str = va_arg(value, char *);
    if (str == NULL)
    {
        str = "(null)";
        length = _strlen(str);
        for (i = 0; i < length; i++)
        _putchar(str[i]);
        return (length);
    }
    else {
        length = _strlen(str);
        for (i = 0; i < length; i++)
        _putchar(str[i]);
        return (length);
    }
}