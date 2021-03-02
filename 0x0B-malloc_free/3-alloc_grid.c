#include "holberton.h"
#include <stdlib.h>


/**
 * alloc_grid - function that returns a pointer to a 2 dimensional
 * array of integers.
 * @width: the length of the array
 * @height: the height of the array
 * Return: the two dimensional array
 **/


int **alloc_grid(int width, int height)
{
	int **newarray;
	int counter, counter2, k;

	if (width <= 0 || height <= 0)
	return (NULL);

	newarray = malloc(height * sizeof(int *));

	if (newarray == NULL)
	return (NULL);

	for (counter = 0; counter < height; counter++)
	{
	newarray[counter] = malloc(width * sizeof(int));

	if (newarray[counter] == NULL)
	{
	for (counter2 = 0 ; counter2 <= counter; counter2++)
	free(newarray[counter2]);
	free(newarray);
	return (NULL);
	}

	for (k = 0; k < width; k++)
	newarray[counter][k] = 0;
	}
	return (newarray);
}

