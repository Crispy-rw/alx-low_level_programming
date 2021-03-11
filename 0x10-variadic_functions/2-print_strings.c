#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_strings - list numbers
* @separator: separator
* @n: number of params
* Return: void
*/


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int counter = n;
	char *chr;

	va_start(ap, n);

	for (; counter > 0; counter--)
	{

	chr = va_arg(ap, char*);

	if (chr == NULL)
		printf("(nil)");
	else
	{
	if (counter == 1 && separator != 0)
		printf("%s", chr);
	else
		printf("%s%s", chr, separator);
	}
	}
	va_end(ap);
	putchar('\n');

}
