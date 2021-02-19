#include "holberton.h"



/**
* reverse_array - function that reverses the content of an array of integers.
*
*@a: array of integers
*@n: number of integers in an array
* Return: void
*/


void reverse_array(int *a, int n)
{

int temp, last, i;

last = n - 1;
i = 0;

while (i < last)
{

	temp = *(a + i);
	*(a + i) = *(a + last);
	*(a + last) = temp;
	i++;
	last--;
}

}
