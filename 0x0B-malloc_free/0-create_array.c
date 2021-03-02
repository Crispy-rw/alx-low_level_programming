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
	int counter = 0;

	if (size == 0)
		return (NULL);

	str = malloc(sizeof(*str) * 98 + 1);

	while (counter <= 98)
	{
	str[counter] = c;
	counter++;
	}
	str[counter++] = '\0';

	return (str);
}
