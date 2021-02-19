#include "holberton.h"


/**
* _strlen - return the length of a string
*
*@c: string to be counted
*Return: Integer
*/


int _strlen(char *c)
{

int i;
while (*(c + i) != '\0')
{
	i++;
}
return (i);
}

/**
* _strcat - return the concatenates two strings
*
*@dest: destinations string
*@src: source string
* Return: destinations string
*/


char *_strcat(char *dest, char *src)
{

int i = 0;
int len = _strlen(dest);
while (*(src + i) != '\0')
{
	*(dest + len) = *(src + i);
	len++;
	i++;
}
dest[len++] = '\0';
return (dest);
}
