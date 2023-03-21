#include <stdio.h>

/**
 * main - headers goes there
 *
 * Return: always 0
*/
void print_alphabet(void);

int main(void)
{
	return (0);
}

void print_alphabet(void)
{
	int i;

	for(i = 97; i<=122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
