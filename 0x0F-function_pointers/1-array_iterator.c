#include "main.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @array: the name
 * @size: the function used to print the name
 * @action: action
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
	{
		array[i] = action(array[i]);
	}
}

