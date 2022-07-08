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
typedef struct print
{
	char t;
	int (*f)(va_list );
} print_t;

int _printf(const char *format, ...);
int get_printf(const char c, va_list ap);



int pchar(va_list arg);
int pstr(va_list arg);
int pperc(va_list arg);
#endif