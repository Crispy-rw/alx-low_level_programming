#include "holberton.h"



/**
* _abs - computes the absolute value of an integer.
*
*@n: function argument to be chacked
*
*Return: return absolute value of a number
*/


int _abs(int n)
{
int number;

if (n < 0)
{
number = -1 * n;
return (number);
}
else
{
return (n);
}
return (0);
}
