#include "search_algos.h"

/**
  * _binary_search - Performs a search for a value in a sorted array
  *                  of integers using binary search.
  * @array: Refers memory address of first element in array to be searched.
  * @left: Specifies initial index of the (sub)array where search is conducted.
  * @right: Indicates concluding index of (sub)array where search is performed.
  * @value: Specifies the value to search for in the array.
  *
  * Return: If the value is not present or the array is NULL, the result is -1.
  *         Otherwise, its return the index where the value is located.
  *
  * Description: Displays (sub)array being searched after each modification.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}

/**
  * exponential_search - Looks for a value in a sorted array of integers
  *                      using the exponential search algorithm.
  * @array: Refers the memory address of first element in array to be searched.
  * @size: Specifies the count of elements in the array.
  * @value: Specifies the value to search for in the array.
  *
  * Return: If the value is not present or the array is NULL, the result is -1.
  *         Otherwise, its return the index where the value is located.
  *
  * Description: Outputs a value each time it is compared in the array.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
