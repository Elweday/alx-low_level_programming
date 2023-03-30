#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *c) {

	for (; *c != '\0'; c++)
	{
		*c = (((*c - 'a' + 13) % 26) + 'a');
	}
	return  (c);
}

