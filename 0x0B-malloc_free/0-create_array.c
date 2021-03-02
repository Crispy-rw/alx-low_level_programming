#include "stdlib.h"


/**
* create_array - a function that creates an array of chars, and initializes
*	it with a specific char.
* @size: size of the array
* @c: char
* Return: pointer to the array
*/


char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int counter = 0;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(*str) * size);
	if (str != NULL)
	{
	while (counter < size)
	{
	str[counter] = c;
	counter++;
	}
	}
	return (str);
}
