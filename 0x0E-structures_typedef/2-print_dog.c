#include "dog.h"
#include "stdio.h"

/**
*print_dog - prints the informtions of a dog
*@d: instance of a dog struct
* Return: void
*/

void print_dog(struct dog *d)
{
	if (d)
	{

	if (d->name != NULL)
	printf("Name: %s\n", d->name);
	else
	printf("Name: (nil)\n");

	printf("Age: %f\n", d->age);

	if (d->owner)
	printf("Owner: %s\n", d->owner);
	else
	printf("Owner: (nil)\n");

	}
}
