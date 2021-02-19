#include "holberton.h"
#include "stdio.h"


/**
* _strcmp - Compared two string
*
*@s1: string one
*@s2: string two
*Return: the diff between two strings
*/

int _strcmp(char *s1, char *s2)
{

while (*s1 && *s1 == *s2)
{
++s1;
++s2;
}
return ((int)(unsigned char) (*s1) - (int)(unsigned char) (*s2));
}
