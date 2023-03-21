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
	printf("_putchar\n");
	return (0);
}

void print_alphabet(void)
{
	for(int i = 0; i<26; i++)
	{
		_putchar(i);
	}
}
