#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Looks for a value within an array of
 * integers using the Jump search algorithm.
 *
 * @array: The input array
 * @size: Determines the size of the array.
 * @value: Specifies the value to search for in the array.
 * Return: Identifies the index of the number in the array.
 */
int jump_search(int *array, size_t size, int value)
{
	int index, m, k, prev;

	if (array == NULL || size == 0)
		return (-1);

	m = (int)sqrt((double)size);
	k = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		k++;
		prev = index;
		index = k * m;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
