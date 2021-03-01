#include "holberton.h"

/**
 * _strlen - function that returns the length of a string.
 *
 * @s: pointer to an string
 * Return: int (length of the string)
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i += 1;
	}
	return (i);
}
