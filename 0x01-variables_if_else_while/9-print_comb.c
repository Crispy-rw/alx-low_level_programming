	#include <stdio.h>

/**
 * main -  program that prints all possible combinations of single-digit
 *
 * Numbers must be separated by ,followed by a space
 * Numbers should be printed in ascending order
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int n;

for (n = 48; n <= 57; n++)
{
putchar(n);
if (n > 56)
	continue;
putchar(44);
putchar(32);
}
putchar('\n');
return (0);
}
