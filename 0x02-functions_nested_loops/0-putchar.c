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

	for (i = 97; i <= 122; i++)
	{
		putchar((char) i);
	}
	putchar('\n');
	return (0);
}
