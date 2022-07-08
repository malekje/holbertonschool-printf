#include "main.h"
/**
 * pchar - return char
 * @ap: arg
 * Return: 1 on success
 */
int pchar(va_list arg)
{
	putchar(va_arg(arg, int));
	return (1);
}

/**
 * pstr - ret an str
 * @ap: var to write
 * Return: string
 */
int pstr(va_list arg)
{
	int i = 0;
	char *s = va_arg(arg, char *);

	if (s == NULL)
		s = "(null)";
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	return (i);
}

/**
 * pperc - return per
 * @ap: arg
 * Return: per
 */
int pperc(va_list arg)
{
	(void)arg;
	putchar('%');
	return (1);
}