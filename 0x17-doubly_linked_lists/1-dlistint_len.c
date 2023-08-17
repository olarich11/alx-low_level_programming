#include "lists.h"

/**
 * dlistint_len - To returns the number of elements in
 * a double linked list
 *
 * @h: The head of the list
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)

	{
		count++;
		h = h->next;
	}
	return (count);
}
