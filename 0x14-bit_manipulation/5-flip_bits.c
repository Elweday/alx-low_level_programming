#include "main.h"

/**
 * flip_bits - Calculates the number of bits that need to be flipped
 *             to transform one number into another.
 * @n: The first number.
 * @m: The second number to flip n to.
 *
 * Return: The count of bits that need to be flipped to transform n into m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    unsigned long int xor = n ^ m;
    unsigned int bitCount = 0;

    while (xor > 0)
    {
        bitCount += (xor & 1);
        xor >>= 1;
    }

    return bitCount;
}

