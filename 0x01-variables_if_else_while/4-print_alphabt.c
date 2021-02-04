#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, followed by a new line.
 *
 * Print all the letters except q and e
 * You can only use the putchar function (every other function
 *	 (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
if (ch == 'q' || ch == 'e')
	continue;
putchar(ch);
}
putchar('\n');
return (0);
}
