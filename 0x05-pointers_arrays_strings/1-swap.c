#include <stdio.h>
#include "main.h"

/**
 * swap_int - the main function or something
 * @a: stuff
 * @b: second element
 * Return: success code 0
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

