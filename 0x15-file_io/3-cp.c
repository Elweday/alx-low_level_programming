#include "main.h"

/**
 * main - Entry point of the program.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of strings containing the arguments.
 *
 * Return: An integer representing the exit status.
 */
int main(int argc, char *argv[])
{
	int inputFD, outputFD, nBytes_read, nBytes_write;
	char text[BUF_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	inputFD = open(argv[1], O_RDONLY);
	if (inputFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	outputFD = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (outputFD == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((nBytes_read = read(inputFD, text, BUF_SIZE)) > 0)
	{
		nBytes_write = write(outputFD, text, nBytes_read);
		if (nBytes_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (nBytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	close_file(inputFD);
	close_file(outputFD);
	return (0);
}

/**
 * close_file - Closes an opened file.
 * @FD: The file descriptor.
 *
 * Return: None.
 */
void close_file(int FD)
{
	if (close(FD) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", FD);
		exit(100);
	}
}

