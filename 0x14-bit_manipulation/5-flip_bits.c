#include "main.h"

/**
 * flip_bits - Function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: Number 1.
 * @m: Number 2.
 *
 * Return: Number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int digit;

	for (digit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			digit++;
	}

	return (digit);
}

