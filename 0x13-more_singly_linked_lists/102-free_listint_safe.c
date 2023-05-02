#include "lists.h"

/**
 * free_listint_safe- Function that frees a listint_t list.
 * @h: First pointer that point to node in the linked list
 *
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t fdom = 0;

	int diff;

	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;

		if (diff > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			fdom++;
		}

		else
		{
			free(*h);
			*h = NULL;
			fdom++;
			break;
		}
	}

	*h = NULL;

	return (fdom);
}
