#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index.
 * @n: The value number to search.
 * @index: Index, starting from 0, of the bit you want to get.
 *
 * Return: Bit value at the given index, or -1 if index is invalid.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_len;

	if (index > 63)
		return (-1);

	bit_len = (n >> index) & 1;

	return (bit_len);
}

