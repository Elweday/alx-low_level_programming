#include <stdio.h>
#include "main.h"

/**
 * _puts - the main function or something
 * @sre: string to find its length
 * Return: success code 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(str);
		str++;
	}
	putchar('\n');
}

