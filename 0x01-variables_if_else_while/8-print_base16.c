#include <stdio.h>

/**
* main - prints all the number of base 16 in lowercase,followed by a new line.
*
* You can only use the putchar function (every other
*	 function (printf, puts, etc…) is forbidden)
* All your code should be in the main function
* You can only use putchar three times in your code
* Return: 0
*/

int main(void)
{

int n;
char l;

for (n = '0'; n <= '9'; n++)
{
putchar(n);
}

for (l = 'a'; l <= 'f'; l++)
{
putchar(l);
}

putchar('\n');

return (0);
}
