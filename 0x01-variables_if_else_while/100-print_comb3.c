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
	int i, j;

	for (i = 0; i <= 8; i++)
	{
		for (j = i + 1; j <= 8; j++)
		{
			putchar((char) i);
			putchar((char) j);
			if (i != 8 && j != 8)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');
	return (0);
}
