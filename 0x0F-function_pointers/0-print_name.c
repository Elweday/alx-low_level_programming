#include "main.h"
#include <stdio.h>

/**
 * print_name - prints a name
 * @name: the name
 * @f: the function used to print the name
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

