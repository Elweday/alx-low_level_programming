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
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);

	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}

