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
	unsigned int counter = 0;

	va_start(ap, n);

	for (; counter < n; counter++)
	{
	if (counter < (n - 1)  && separator != 0)
		printf("%d%s", va_arg(ap, int), separator);
	else
		printf("%d", va_arg(ap, int));
	}
	va_end(ap);
	putchar('\n');

}
