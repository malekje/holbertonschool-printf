#include "main.h"
/**
 * get_printf - get_printf to get function from function.c
 * @ap: arg
 * @c: char
 * Return: char
 */
int get_printf(const char c, va_list ap)
{
    int i = 0;
    int j = 0;
    printf_t type[] = {
        {'c', pchar},
        {'s', pstr},
        {'%', pperc}};
    while (type[i].t != 0)
    {
        if (type[i].t == c)
        {
            j += type[i].f(ap);
            return (j);
        }
        i++;
    }
    return (0);
}