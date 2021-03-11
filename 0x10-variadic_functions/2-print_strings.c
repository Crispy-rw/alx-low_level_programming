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
	unsigned int counter;
	char *chr;

	va_start(ap, n);

	for (counter = 0; counter < n; counter++)
	{

	chr = va_arg(ap, char*);

	if (chr == NULL)
		printf("(nil)");
	else
	{
	if (counter  < (n - 1) && separator != 0)
		printf("%s%s", chr, separator);
	else
		printf("%s", chr);
	}
	}
	va_end(ap);
	printf("\n");

}
