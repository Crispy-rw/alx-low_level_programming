#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse, followed by a new line
 *
 * You can only use the putchar function (every other function
 *	 (printf, puts, etc…) is forbidden)
 * All your code should be in the main function
 * You can only use putchar twice in your code
 * Return: 0
 */

int main(void)
{
int ch;
for (ch = 122; ch > 96; ch--)
{
	putchar(ch);
}
putchar('\n');
return (0);
}
