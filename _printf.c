#include "main.h"
/**
 * _printf - a typical printf
 * @format: is a character string
 * Return: the number of characters printed
 */
int _printf(const char *format, ...)
{
int len, i;
va_list args;
va_start(args, *format);

len = strlen(format);
for (i = 0; i < len; i++)
{
	if (format[i] == '%')
	{
		check(format[i + 1], va_arg(args, char *));
}
}
return (len);

}