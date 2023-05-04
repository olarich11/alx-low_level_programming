#include "main.h"

/**
 * get_bit- function that returns the value
 * of a bit at a given index.
 * @n: The value number to search
 * @index: index, starting from 0 of the bit
 * you want to get
 *
 * Return: value bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_len;

	if (index > 63)
		return (-1);

	bit_len = (n >> index) & 1;

	return (bit_len);
}

