#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe- Function that frees a listint_t list.
 * @h: First pointer that point to node in the linked list
 *
 * Return: The number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t nums;

	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopnode = find_listint_loop(*h);
	for (nums = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
	{
		nums++;
		next = (*h)->next;

		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			nums++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (nums);
}
