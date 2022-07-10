/**
 * HEXADECIMAL - Unsigned hexadecimal integer (uppercase)
 * @n: number
 * Return: length
 */
int	HEXADECIMAL(unsigned int n)
{
	int c = 0;
	char a[] = "0123456789ABCDEF";

	if (n >= 16)
		c += HEXADECIMAL(n / 16);
	c += putchar(a[n % 16] + '0');
	return (c);
}

/**
 * hexadecimal - change base
 * @n: the number
 * Return: length
 */
int	hexadecimal(unsigned int n)
{
	int c = 0;
	char a[] = "0123456789abcdef";

	if (n >= 16)
		c += hexadecimal(n / 16);
	c += putchar(a[n % 16] + '0');
	return (c);
}
