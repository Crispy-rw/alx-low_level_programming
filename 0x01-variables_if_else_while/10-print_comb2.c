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
int n = 48;
int m = 48;

for (n = 48; n <= 57; n++)
{

for (m = 48; m <= 57; m++)
{

putchar(n);
putchar(m);

if (n != 57 || m != 57)
{
putchar(44);
putchar(32);

}

}

}
putchar('\n');
return (0);
}
