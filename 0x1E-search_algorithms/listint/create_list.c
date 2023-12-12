#include <stdlib.h>
#include "../search_algos.h"

void free_list(listint_t *list);

/**
 * create_list - Forms a linked list with a single chain of connected elements.
 *
 * @array: Refers to the memory address of the array used to populate the list.
 * @size: The size of the array
 *
 * Return: A pointer to the list's head (NULL if unsuccessful).
 */
listint_t *create_list(int *array, size_t size)
{
	listint_t *list;
	listint_t *node;

	list = NULL;
	while (array && size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
		{
			free_list(list);
			return (NULL);
		}
		node->n = array[size];
		node->index = size;
		node->next = list;
		list = node;
	}
	return (list);
}
