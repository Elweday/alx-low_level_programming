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
	for (int i = 97; i <= 122; i++)
	{
		putchar((char) i);
	}
	for (int i = 65; i <= 90; i++)
	{
		putchar((char) i);
	}
	putchar('\n');
	return (0);
}
