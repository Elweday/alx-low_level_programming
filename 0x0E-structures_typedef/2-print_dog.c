#include <stdlib.h>
#include "dog.h"
#include <stdio.h> 

/**
 * print_dog -  initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\nAge: %d\nOwner: %s\n", d->name?d->name:"(nil)", d->age, d->owner?d->owner:"(nil)");
}

