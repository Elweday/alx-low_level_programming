#include "main.h"

/**
 * create_file - Creates a file and writes text content to it.
 * @filename: The name of the file to create.
 * @text_content: The text to write inside the file.
 *
 * Return: 1 if the file was created successfully, -1 otherwise.
 */
int create_file(const char *filename, char *text_content)
{
	int fd_open, fd_write;

	if (filename == NULL)
		return (-1);

	fd_open = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd_open == -1)
		return (-1);

	if (text_content != NULL)
	{
		fd_write = write(fd_open, text_content, _strlen(text_content));
		if (fd_write == -1)
			return (-1);
	}

	close(fd_open);
	return (1);
}

/**
 * _strlen - Calculates the length of a string.
 * @str: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int count = 0;

	while (*str++)
		count++;
	return (count);
}

