#include <stdio.h>
#include "main.h"

/**
 * create_array - prints the name of the program
 * @size: number of arguments
 * @c: array of arguments
 *
 * Return: Always 0 (Success)
*/

char *create_array(unsigned int size, char c)
{
	char *ptr;
	char *i;

	ptr = malloc(size);
	for (i = ptr; i < ptr + size; i++)
	{
		*i = c
	}
	return ptr;
}
