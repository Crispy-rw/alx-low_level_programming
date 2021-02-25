#include "holberton.h"

/**
 * calc_square - calculate squareroot
 *
 * @x: number
 * @n: number to squareroot
 * Return: result
 */
int calc_square(int x, int n)
{
if (x * x == n)
return (x);
if (n < 0 || x * x > n)
return (-1);
return (calc_square(x + 1, n));
}

/**
 * _sqrt_recursion - call square function
 *
 * @n: number to compute
 * Return: result
 */
int _sqrt_recursion(int n)
{
return (calc_square(0, n));
}
