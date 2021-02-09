#include "holberton.h"


/**
* _isalpha - function that checks for lowercase character.
*
*@c: function argument
*
* Return: return 0 if its lowercase character otherwise return 1
*/


int _isalpha(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
