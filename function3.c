#include "main.h"
/**
 * ppntr - print pointer
 * @arg: arg
 * Return: length
 */
int ppntr(va_list arg)
{

unsigned long h[20], n = 0;
	unsigned int len = 0;
	int i = 0;

	n = va_arg(arg, unsigned long);
	if (n == 0)
	{
		putchar('(');
		putchar('n');
		putchar('i');
		putchar('l');
		putchar(')');
		len += 5;
	}
	else if (n > 0)
	{
	putchar('0');
	putchar('x');
	len += 2;
	while (n > 0)
	{
		if (n % 16 >= 10 && n % 16 <= 15)
			h[i] = 87 + (n % 16);
		else
			h[i] = 48 + (n % 16);
		n = n / 16;
		i++;
	}
	for (--i; i >= 0; i--)
	{
		putchar(h[i]);
		len++;
	}
	}
	return (len);



}

