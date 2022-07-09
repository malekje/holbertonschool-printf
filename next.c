#include "main.h"
#include <stdio.h>
#include <stdarg.h>
/**
 *next - prints next letter in format
 *@format: pointer to string
 *@i: index of character after %
 *Return: count
 */
int next(const char *format, int i)
{
    int count = 0;
    if (format[i] != '%')
    {
        _putchar(format[i - 1]);
        count += 1;
    }
    _putchar(format[i]);
    count += 1;
    return (count);
}