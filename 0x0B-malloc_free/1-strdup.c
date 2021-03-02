#include "stdlib.h"

/**
* _strdup - function that returns a pointer to a newly allocated space in
* memory, which contains a copy of the string given as a parameter.
*@str: string to duplicate
*Return: pointer to the new string
*/


char *_strdup(char *str)
{
int str_size = 0;
int counter = 0;
char *new_str;


if (str == NULL)
return (NULL);

while (*(str + str_size) != '\0')
str_size++;

str_size++;

new_str = malloc(str_size *sizeof(char));

if (new_str == NULL)
return (NULL);


while (counter <= str_size)
{
*(new_str + counter) = *(str + counter);
counter++;
}

return (new_str);
}
