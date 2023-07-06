#include "main.h"

/**
 * clear_bit - Clears the value of a bit at a specified index, setting it to 0.
 * @n: A pointer to the number containing the bit.
 * @index: The index of the bit to clear the value at (starting from 0).
 *
 * Return: If an error occurs - returns -1.
 *         Otherwise - returns 1.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return (-1);

    *n &= ~(1 << index);

    return (1);
}

