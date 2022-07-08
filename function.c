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
	int d, len;
	unsigned int num;

	d = 1;
	len = 0;
	num = n;
	if (n < 0)
	{
		putchar('-');
		len++;
		num = -n;
	}

	while (num / d > 9)
		d *= 10;
	while (d != 0)
	{
		putchar('0' + num / d);
		len++;
		num %= d;
		d /= 10;
	}
	return (len);
}

/**
 * pbin - make a binary
 * @ap: arg
 * Return:
 */
int pbin(va_list arg)
{
	int n = va_arg(arg, int);
	int m, len;

	len = 0;
	m = n;
	while (m >= 0)
	{
		if ((m / 2))
		{
			putchar(m / 2 + '0');
		}
		len++;
		m = m / 2;
	}
	return (len);
}
