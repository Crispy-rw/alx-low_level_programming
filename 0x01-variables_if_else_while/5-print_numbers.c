#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0,
 *	 followed by a new line.
 *
 * All your code should be in the main function
 * Return: 0
 */

int main(void)
{
int n;
for (n = 0; n < 10; n++)
{
printf("%d", n);
}
putchar('\n');
return (0);
}
