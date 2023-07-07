#include "main.h"

/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: Printed number in binary
 */
void print_binary(unsigned long int n)
{
	int p, cout = 0;
	unsigned long int linenum;

	for (p = 63; p >= 0; p--)
	{
		linenum = n >> p;

		if (linenum & 1)
		{
			_putchar('1');
			cout++;
		}
		else if (cout)
		{
			_putchar('0');
		}
	}

	if (!cout)
	{
		_putchar('0');
	}
}

