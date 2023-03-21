#include <stdlib.h>
#include <stdio.h>

/**
 * main - headers goes there
 *
 * Return: always 0
*/
void print_alphabet(void);

void print_alphabet(void)
{
	int i;

	for(i = 97; i<=122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
