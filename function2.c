#include "main.h"
/**
 * puns - Unsigned decimal integer
 *
 * @arg: arg
 * Return: length
 */
int puns(va_list arg)
{
	unsigned int num, a = 0, div;

	num = va_arg(arg, int);

	if (num == 0)
	{
		putchar('0');
		a = 1;
	}
	if (num > 0)
	{
		for (div = 1; (num / div) > 9; div *= 10)
			;
		while (div != 0)
		{
			putchar((num / div) + '0');
			num %= div;
			div /= 10;
			a++;
		}
	}
	return (a);
}

/**
 * poct - Unsigned octal
 *
 * @arg: arg
 * Return: length
 */
int poct(va_list arg)
{

	unsigned int num, a = 0, i = 0;
	int tab[100];

	num = va_arg(arg, int);
	if (num < 9)
	{
		putchar(num + '0');
		a = 1;
	}
	else if (num >= 9)
	{
		while (num > 0)
		{
			tab[i] = num % 8;
			num /= 8;
			i++;
		}
	}
	while (i--)
	{
		putchar(tab[i] + '0');
		a++;
	}
	return (a);
}


/**
 * phex - Unsigned hexadecimal integer
 * @arg: arg
 * Return: length
 */
int phex(va_list arg)
{
unsigned int n = va_arg(arg, int);

	return (hexadecimal(n));
}


/**
 * pHEX - Unsigned hexadecimal integer (uppercase)
 * @arg: arg
 * Return: length
 */
int pHEX(va_list arg)
{

	unsigned int n = va_arg(arg, int);

	return (HEXADECIMAL(n));
}
