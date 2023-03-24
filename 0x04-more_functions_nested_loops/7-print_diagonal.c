#include "main.h"

/**
 * print_diagonal- function that draws a diagonal line on the terminal
 * @n: Number of time to be printed on the diagonal lines
 * Return: empty
 */

void print_diagonal(int n)

{
	int x, y;

	if (n <= 0)
	{
	else
	{
	for (x = 0; x < n; x++)
	{
	for (y = 0; y < x; y++)
	{
	_putchar(92);
	_putchar('\n');
	}
	}
}
