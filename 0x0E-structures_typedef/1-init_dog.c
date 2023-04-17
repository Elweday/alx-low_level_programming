#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - check the code
 * @d: dog pointer
 * @name: dog name 
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
