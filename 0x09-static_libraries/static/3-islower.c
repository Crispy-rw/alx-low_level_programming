#include "holberton.h"


/**
* _islower - function that checks for lowercase character.
*
*@c: function argument
*
* Return: return 0 if its lowercase character otherwise return 1
*/


int _islower(int c)
{

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
