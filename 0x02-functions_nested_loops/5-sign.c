#include "holberton.h"

/**
* print_sign - prints the sign of a number.
*
*@n: function argument
*
*Return: Returns 1 if n is greater than zero or return 0 if n is zero
*and return -1 if n is less than zero
*/


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}

return (0);
}
