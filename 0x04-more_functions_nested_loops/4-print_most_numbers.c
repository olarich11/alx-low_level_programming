#include "main.h"

/**
 * print_most_numbers - Numbers that print from 0 to 9
 * Note: Prints the numbers excluding 2 and 4
 * Return: Numbers that print since from 0 to 9
 */

void print_most_numbers(void)

{
	int x = 0;

	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	{
	continue;
	}
	else
	{
	_putchar(9x + '0');
	}
	}
	_putchar('\n');
}
