#include "variadic_functions.h"
#include <stdarg.h>


/**
*sum_them_all - returns the summation of arguments
*@n: number of params
*Return: Summation of args
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i = 0;
	unsigned int counter = n;

	if (n == 0)
	return (0);

	va_start(ap, n);

	for (; counter > 0; counter--)
	i += va_arg(ap, int);

	va_end(ap);
	return (i);
}

