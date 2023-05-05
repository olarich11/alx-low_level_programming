#include "main.h"

/**
 * set_bit- Function that sets the value of a bit
 * to 1 at a given index..
 * @n: The pointer to a unsigned long int.
 * @index: index, starting from 0 of the bit
 * you want to set.
 *
 * Return: 1 or -1 if 1 works or -1 give an error
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
