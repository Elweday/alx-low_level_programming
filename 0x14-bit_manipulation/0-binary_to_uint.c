#include "main.h"

/**
 * binary_to_uint - binary to unsigned int
 *
 * @b: ptr to array of chars
 *
 * Return: unsigned number
 */

unsigned int binary_to_uint(const char *b)
{
	signed int i = 0, num = 0;


	if (!b)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		num <<= 1;

		if (b[i] & 1)
		{
			num += 1;
		}
		index += 1;
	}
	return (num);
}
