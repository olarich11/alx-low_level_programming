#include "main.h"

/**
 * binary_to_uint- Function that converts a binary number
 * to an unsigned int.
 * @b: The string of number containing the binary number
 *
 * Return: The number that is to be converted
 */
unsigned int binary_to_uint(const char *b)
{
	int k;

	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[k] - '0');
	}

	return (dec_val);
}

