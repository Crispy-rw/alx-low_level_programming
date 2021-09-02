#include "search_algos.h"
/**
 * binary_search - searches for value in a sorted array
 * of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: the number of elements in array
 * @value: the value to search
 *
 * Return: -1 if value is not present in array or if array is NULL
 *
 **/
int binary_search(int *array, size_t size, int value)
{
	int i = 0, left = 0, right = size - 1;
	int middle;

	while (left <= right)
	{
		printf("Searching in array: ");

		i = left;

		while (i <= right)
		{
			if (i == right)
			{
				printf("%i\n", array[i]);
			}
			else
			{
				printf("%i, ", array[i]);
			}
			i++;
		}
		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] < value)
			left = middle + 1;
		else
			right = middle - 1;
	}
	return (-1);
}
