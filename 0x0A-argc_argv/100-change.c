#include <stdio.h>
#include "main.h"
/**
 * main - adds two positive number
 * @argc: number of arguments
 * @argv: array of arguents
 *
 * Return: 0 (Success), or 1 (Success)
 */
int main(int argc, char *argv[])
{	
	int num;
	int r;

	if (argc == 2)
	{
		r = 0;
		num = _atoi(argv[1]);
		r += num / 25;
		num = num % 25;
		r += num / 10;
		num = num % 10;
		r += num / 5;
		num = num % 5;
		r += num / 2;
		num = num % 2;
		r += num;
		printf("%d\n", r);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

