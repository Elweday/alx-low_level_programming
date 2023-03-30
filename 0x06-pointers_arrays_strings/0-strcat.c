#include <stdio.h>
#include "main.h"

/**
 * _strcat - the main function or something
 * @dest: stuff
 * @src: second element
 * Return: success code 0
 */

char *_strcat(char *dest, char *src)
{
	while(*dest != '\0')
	{
		dest ++;	
	}
	dest = src;
}

