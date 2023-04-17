#include <stdio.h>
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
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
}
