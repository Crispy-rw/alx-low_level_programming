#include "holberton.h"

/**
 * print_most_numbers - function that prints the numbers, from 0 to 9.
 *
 * Return: nothing.
 */

void print_most_numbers(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		if (n != 2 && n != 4)
			_putchar(n + '0');
		n += 1;
	}
	_putchar('\n');
}

