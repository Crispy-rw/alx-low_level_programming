#include "holberton.h"

/**
 * get_bit - This function returns the value of a bit ar a given index
 * @n: a string of 0 and 1
 * @index: index of the bit you want to get
 * Return: bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
if (index > 64)
{
return (-1);
}
else
{
return (n >> index & 1);
}
}
