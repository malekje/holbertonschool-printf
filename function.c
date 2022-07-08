#include "main.h"
/**
 * pchar - return char
 * @ap: arg
 * Return: char
 */
char pchar (va_list ap)
{
char c;

c = va_arg(ap, int);
putchar (c);
return (1);
}

/**
 * str - reutn an str
 * @ap: var to write
 * Return: string
 */
char str(va_list ap)
{
char *s;

s = va_arg(ap, char*);
if (s == NULL)
	return (NULL);
write(STDOUT_FILENO, s, strlen(s));
return (strlen(s));
}

/**
 * per - return per
 * @ap: arg
 * Return: per
 */
char per(va_list ap)
{

putchar('%');

return (1);
}
