#include "main.h"
/**
 * _printf - a typical printf
 * @format: is a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{

    unsigned int i = 0, j = 0, a = 0;
    va_list ap;

    if (format == NULL || (strlen(format) == 1 && format[0] == '%'))
    {
        return (-1);
    }
    va_start(ap, format);
    while (format && format[i])
    {
        if (format[i] != '%')
        {
            putchar(format[i]);
            j++;
        }
        else if (format[i] == '\0')
            return (-1);
        else if (format[i] == '%')
        {
            a = get_printf(format[i + 1], ap);
            if (a == 0)
                j = j + next(format, i);
            else
            {
                j = j + a;
                if (format[i] == '+' || format[i] == ' ' || format[i] == '#')
                    i++;
            }
        }
        i ++;
    }
        va_end(ap);
        return (j);
    }
