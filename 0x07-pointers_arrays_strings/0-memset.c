#include "holberton.h"

/**
* _memset - unction that fills memory with a constant byte.
*
*@s: space to fill bytes
*@b: bytes to write
*@n: number of bytes to write
*Return: dest address
*/

char *_memset(char *s, char b, unsigned int n)
{	unsigned int count = 0;
	for (count = 0; count < n; count++)
	{
		*(s + count) = b;
	}

	return (s);
}
