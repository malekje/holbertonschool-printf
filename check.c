#include "main.h"
/**
 * check - a simple function to check the carac
 * @a: the carac
 */
int check (char a, char *str)
{
int i, len;

if (a == 'c')
{
if (strlen(str) != 1)
return (-1);
else if (toupper(str) < 'A' || toupper(str) > 'Z')
return (-1);
else putchar(str);
}
if (a == 's')
{
len = strlen(str);
for (i = 0; i < len; i++)
putchar(str[i]);
}
if (a == '%')
{
putchar('%');
}
}
