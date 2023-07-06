#include "main.h"

/**
 * get_endianness - Determines the endianness of the system.
 *
 * Return: If the system is big-endian - returns 0.
 *         If the system is little-endian - returns 1.
 */
int get_endianness(void)
{
    int num = 1;
    char *endian = (char *)&num;

    if (*endian == 1)
        return (1);

    return (0);
}

