#include <stdlib.h>
#include <stdio.h>

/**
 * main - headers goes there
 *
 * Return: always 0
*/
void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	for(int i = 97; i<=122; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
