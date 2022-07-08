#include "main.h"
/**
 * _printf - a typical printf
 * @format: is a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
char *s, *str;
int len, i = 0, j;
va_list ap;
va_start(ap, format);
printf_t type[]= {
                    {'c', pchar},
                    {'s', pstr},
                    {'%', pperc}
};


if (format == NULL || (strlen(format) == 1 && format [0] == '%'))
{
return (-1);
}
while (format[i])
{
j = 0;
while (format[i] != type[j].t && type[j].t)
j++;
if (type[j].t == format [i])
return (type[j].f);
}
return (1);
}
