#include <stdio.h>
#include "main.h"

/**
 * _strlen - the main function or something
 * @s: string to find its length
 * Return: success code 0
 */

int _strlen(char *s)
{ 
	int len;
	
	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;

	}

	return len;

}

