#include "dog.h"
#include "stdlib.h"
#include "stdio.h"

void print_dog(struct dog *d);

void print_dog(struct dog *d)
{
if (d != NULL)
{
if (!d->name)
printf("(nil)");
else if (!d->owner)
printf("(nil)");
else if (!d->age)
printf("(nil)");
}else
printf(" ");
}
