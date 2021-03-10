#include <function_pointers.h>

/**
*array_iterator - function iterator
*@array: array of element
*@size: size of array
*@action: action functiom
* Return: void
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t count;
for (count = 0; count < size; count++)
{
action(array[count]);
}
}

