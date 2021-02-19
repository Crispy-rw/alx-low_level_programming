#include "stdio.h"


/**
* _strncpy - function that copies a number a bytes from src to dest
*
*@dest: destination string
*@src: source string
*@n: number of bytes to copy
*Return: destination string
*/

char *_strncpy(char *dest, char *src, int n)
{

int i = 0;

while (*(src + i) != '\0' && i < n)
{
	*(dest + i)  = *(src + i);
	i++;
}

while (i < n)
	dest[i++] = '\0';

return (dest);
}
