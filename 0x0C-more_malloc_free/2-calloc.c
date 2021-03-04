#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 *
 * @nmemb: number of element in array
 * @size: size of byte
 *
 * Return: memo
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int count;
	char *memory;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	memory = malloc(nmemb * size);
	if (memory == NULL)
	{
		return (NULL);
	}

	for (count = 0; count < (nmemb * size); count++)
	{
		memory[count] = 0;
	}
return (memory);
}

