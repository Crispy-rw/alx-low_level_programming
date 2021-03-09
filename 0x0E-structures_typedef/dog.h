#ifndef DOG_H
#define DOG_H

/**
* struct dog - new type struct dog with the following elements
* @name: dog name
* @age: age of dog
* @owner: owner of the dog
* Description: This defines a struch holding information of a dog
*/


struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
