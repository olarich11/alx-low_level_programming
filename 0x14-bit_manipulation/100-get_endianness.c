#include "main.h"

/**
 * get_endianness- Function that checks the endianness.
 *
 * Return: If 0 or 1 is big endian or little endian
 * where 0 for big endian and 1 forlittle endian
 */
int get_endianness(void)
{
	unsigned int p;
	char *d;

	p = 1;

	d = (char *) &p;

	return ((int)*d);
}
