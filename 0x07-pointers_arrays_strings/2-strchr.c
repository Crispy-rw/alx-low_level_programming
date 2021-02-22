#include "holberton.h"

/**
* _strchr - function that locates a character in a string.
*
*@s: string to check
*@c: check the occurence of this character
*Return: char
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
