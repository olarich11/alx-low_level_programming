#include "main.h"

/**
 * set_bit - Function that sets the value of a bit to 1 at a given index.
 * @n: The pointer to an unsigned long int.
 * @index: Index, starting from 0, of the bit you want to set.
 *
 * Return: 1 if successful, -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}

