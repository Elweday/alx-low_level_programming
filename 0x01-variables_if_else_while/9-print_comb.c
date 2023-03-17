#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - headers goes there
 *
 * Return: always 0
*/

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar((char) i);
		if (i != 57)
		{
		putchar((char) 44);
		putchar((char) 32);
		}
	}
	putchar('\n');
	return (0);
}
