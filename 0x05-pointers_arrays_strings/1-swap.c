#include "holberton.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: pointer to an int
 * @b: pointer to other int
 * Return: 0 (Nothing)
 */

void swap_int(int *a, int *b)
{
	int inter;

	inter = *a;
	*a = *b;
	*b = inter;
}
