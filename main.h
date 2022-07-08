#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct printf_type
{
	char *t;
	char (*f)(va_list *);
} printf_t;
int _printf(const char *format, ...);
int pchar(va_list arg);
int pstr(va_list arg);
int pperc(va_list arg);
#endif