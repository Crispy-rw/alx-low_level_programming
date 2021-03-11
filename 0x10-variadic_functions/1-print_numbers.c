#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_numbers - list numbers
* @separator: separator
* @n: number of params
* Return: void
*/


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int counter = n;

	va_start(ap, n);

	for (; counter > 0; counter--)
	{
	if (counter < 1 && separator != 0)
		printf("%d", va_arg(ap, int));
	else
		printf("%d%s", va_arg(ap, int), separator);
	}
	va_end(ap);
	putchar('\n');

}
