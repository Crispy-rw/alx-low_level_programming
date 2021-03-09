#include "dog.h"

/**
 * init_dog - init_dog initialization
 * @d: pointer to the dog struct
 * @name: Name of a dog
 * @age: age of a dog
 * @owner: owner of a dog
 * Return: void
 */


void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

