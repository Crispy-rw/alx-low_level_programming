#include "holberton.h"

/**
 * print_alphabet - function to print alphabet in lower case using holberton.h
 * followed by a new line
 *
 * Return: Void
 */

void print_alphabet(void)
{
char a;

for (a = 'a'; a <= 'z'; a++)
{
_putchar(a);
}
_putchar('\n');
}
