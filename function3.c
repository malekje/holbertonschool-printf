#include "main.h"

/**
 * hexa - prints in hexadecimal form in lowercase.
 * @n: unsigned ling int
 * Return: j
 */
int hexa(unsigned int n)
{
	unsigned int a[1024];
	int i = 0, j = 0;
	char p;

	if (n < 1)
	{
		putchar('0');
		return (1);
	}
	for (i = 0; n > 0; i++, j++)
	{
		a[j] = n % 16;
		n = n / 16;
		if (a[j] > 10)
			a[i] = a[j] + 39;
		else
			a[i] = a[j];
	}
	for (i = j - 1; i >= 0; i--)
	{
		p = a[i] + '0';
		putchar(p);
	}
	return (j);
}

/**
 * ppntr - print pointer
 * @arg: arg
 * Return: length
 */
int ppntr(va_list arg)
{

	unsigned long int n = va_arg(arg, unsigned long int);
	int len = 0;

	putchar('0');
	putchar('x');
	len += hexa(n);
	len = len + 2;
	return (len);
}
