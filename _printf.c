#include "main.h"
/**
 * _printf - a typical printf
 * @format: is a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{

    int i = 0, j = 0, a = 0;
    va_list ap;

    if (format == NULL || (strlen(format) == 1 && format[0] == '%'))
    {
        return (-1);
    }
    va_start(ap, format);
    while (*format != '\0')
    {
        if (format[i] != '%')
        {
            putchar(format[i]);
            j++;
        }
        if (format[i] == '%')
        {
            if (format [i + 1] == 'K' || format[i + 1] == '!')
				{
					write(1, format, strlen(format));
					return (strlen(format));
				}
            a = get_printf(format[i + 1], ap);
            if (a != 0)
                j = j + a;
            if (*format != '%' && *(format - 1) != '%')
			{
				write(1, format, 1);
				j++;
			}
			format++;
            if (*(format + (i + 1)) == '\0')
            {
                putchar(format[i]);
                j++;
            }
        }
        i++;
    }
    va_end(ap);
    return (j);
}
