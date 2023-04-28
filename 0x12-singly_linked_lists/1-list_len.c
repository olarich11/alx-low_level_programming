#include <stdlib.h>
#include "lists.h"

/**
 * list_len- function that returns the number of
 * elements in a linked list_t list.
 * @h: The pointer to the list_t list
 *
 * Return: The numbers of element in h
 */
size_t list_len(const list_t *h)
{
	size_t r = 0;

	while (h)
	{
		r++;
		h = h->next;
	}
	return (r);
}
