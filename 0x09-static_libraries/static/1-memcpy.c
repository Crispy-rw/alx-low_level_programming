#include "holberton.h"


/**
* _memcpy - function that copies memory area.
*
*@dest: destination address
*@src: source address
*@n: size of bytes to copy
*Return: destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int count = 0;

	for (count = 0; count < n; count++)
	{
		*(dest + count) = *(src + count);
	}

	return (dest);

}
