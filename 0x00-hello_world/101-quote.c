#include <stdio.h>
#include <unistd.h>

/**
 * main - the main function or something
 *
 * Return: success code 0
 */

int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	const unsigned int msg_len = sizeof(msg) - 1;
	write(STDERR_FILENO, msg, msg_len);
	return (1);
}
