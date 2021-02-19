#include "holberton.h"
#include "stdio.h"

/**
* _strlen - return the length of a string
*
*@c: string to be counted
*Return: Integer
*/


int _strlen(char *c)
{

int i = 0;
while (*(c + i) != '\0')
{
	i++;
}
return (i);
}

/**
* _strncat - return the concatenates two strings
*
*@dest: destinations string
*@src: source string
*@n: number of bytes to append
* Return: destinations string
*/


char *_strncat(char *dest, char *src, int n)
{

int i, len;
len = _strlen(dest);

i = 0;
while (*(src + i) != *(src + n))
{
	*(dest + len) = *(src + i);
	i++;
	len++;
}
*(dest + len) = '\0';
return (dest);


}
