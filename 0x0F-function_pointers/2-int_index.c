#include "main.h"
#include <stdio.h>

/**
 * int_index - prints a name
 * @array: the name
 * @size: the function used to print the name
 * @cmp: comparing function
 * Return: Nothing
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	
	if (size <= 0) return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i])) return (i);
	}
	return (-1);

}

