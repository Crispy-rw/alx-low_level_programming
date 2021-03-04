#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc
 *
 * @b: size of memory
 *
 * Return: memory
 */
void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);

	if (!memory && b)
	{
	exit(98);
	}
	return (memory);
}
