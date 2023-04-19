#include "function_pointers.h"

/**
 * array_iterator- function that executes a function given
 * as a parameter on each element of an array
 * @array: The array function
 * @size: The size of element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && action != NULL && size > 0)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
