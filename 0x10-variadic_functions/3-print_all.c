#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
* print_all - a function that prints anything.
* @format:  a list of types of arguments passed to the function
* Return: void
*/

void print_all(const char * const format, ...)
{
va_list ceis;
int counter = 0;
char *alpha;

va_start(ceis, format);
while (format && format[counter])
{
	switch (format[counter++])
	{
	case 'c':
	printf("%c", va_arg(ceis, int));
	break;
	case 'i':
	printf("%d", va_arg(ceis, int));
	break;
	case 'f':
	printf("%f", (float)va_arg(ceis, double));
	break;
	case 's':
	alpha = va_arg(ceis, char *);
	if (!alpha)
	alpha = "(nil)";
	printf("%s", alpha);
	break;
	default:
	continue;
	}
if (format[counter])
	printf(", ");
}
printf("\n");
va_end(ceis);
}
