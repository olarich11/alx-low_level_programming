#include "search_algos.h"

/**
 * linear_search - Looks for a value within an array of
 * integers using the Linear search algorithm.
 *
 * @array: The input array
 * @size: Determines the size of the array.
 * @value: Specifies the value to search for in the array.
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
