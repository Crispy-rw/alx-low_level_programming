#include "stdlib.h"

/**
*string_nconcat -  function that concatenates two strings.
*
*@s1: string one
*@s2: string two
*@n: number of byte to copy
*
*Return: concatenation of two strings
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int s1_size = 0, s2_size = 0, counter = 0, counter2 = 0;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";


	while (*(s1 + s1_size) != '\0')
	s1_size++;

	while (*(s2 + s2_size) != '\0')
	s2_size++;

	if (n < s2_size)
		s2_size = n;

	concat_str = malloc((s1_size + s2_size + 1) * sizeof(char));

	if (concat_str == NULL)
		return (NULL);

	for (counter = 0; counter < s1_size; counter++)
	{
	concat_str[counter] = s1[counter];
	}

	for (counter2 = 0; counter2 < s2_size; counter++, counter2++)
	{
	concat_str[counter] = s2[counter2];
	}

	concat_str[counter] = '\0';

	return (concat_str);
}
