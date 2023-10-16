#include "main.h"
/**
 * int_print - prints integer
 * @args: arguments
 * Return: int
*/
int int_print(va_list args)
{
    int n = va_arg(args, int);
    int num, last = n % 10, digit, exp = 1;
    int i = 1;
    n = n / 10;
    num = n;
    if (last < 0)
    {
        _putchar('-');
        num = -num;
        n = -n;
        last = -last;
        i++;
    }
    if (num > 0)
    {
        while (num / 10 != 0)
        {
            exp = exp * 10;
            num = num / 10;
        }
        num = n;
        while (exp > 0)
        {
            digit = num / exp;
            _putchar(digit + '0');
            num = num - (digit * exp);
            exp = exp / 10;
            i++;
        }
    }
    _putchar(last + '0');
    return (i);
}
/**
 * deci_print - prints integer
 * @args: arguments
 * Return: int
*/
int deci_print(va_list args)
{
    int n = va_arg(args, int);
    int num, last = n % 10, digit, exp = 1;
    int i = 1;
    n = n / 10;
    num = n;
    if (last < 0)
    {
        _putchar('-');
        num = -num;
        n = -n;
        last = -last;
        i++;
    }
    if (num > 0)
    {
        while (num / 10 != 0)
        {
            exp = exp * 10;
            num = num / 10;
        }
        num = n;
        while (exp > 0)
        {
            digit = num / exp;
            _putchar(digit + '0');
            num = num - (digit * exp);
            exp = exp / 10;
            i++;
        }
    }
    _putchar(last + '0');
    return (i);
}