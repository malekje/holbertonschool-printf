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
 * pstr - return an str
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

/**
 * pint - retun an int
 * @ap: arg
 * Return:  
 */
int pint(va_list arg)
{
	int n = va_arg(arg, int);
if (n < 0) {
        putchar('-');
        n = -n;
    }

    if (n/10)
        pint(n/10);

    putchar(n%10 + '0');
}
