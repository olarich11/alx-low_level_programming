#include "main.h"

/**
 * get_endianness - Function that checks the endianness.
 *
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int p;
	char *d;

	p = 1;
	d = (char *)&p;

	return ((int)*d);
}

