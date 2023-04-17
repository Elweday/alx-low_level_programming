#include <stdlib.h>
#include "dog.h"
#include <stdio.h> 


/**
 * print_dog -  initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name?d->name:"(nil)");
		printf("Age: %d\n", d->age);
		printf("Owner: %s\n", d->owner?d-owner:"(nil)");
	}
}

