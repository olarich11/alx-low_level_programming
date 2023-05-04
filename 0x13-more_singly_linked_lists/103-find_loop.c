#include <stdio.h>
#include "lists.h"

/**
 * find_listint_loop- Function that finds the loop in a linked list.
 * @head: Search linked list
 *
 * Return: Where loop starts and returns, and if there is
 * no loop, it should be NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr, *finish;

	if (head == NULL)
		return (NULL);

	for (finish = head->next; finish != NULL; finish = finish->next)
	{
		if (finish == finish->next)
			return (finish);

		for (ptr = head; ptr != finish; ptr = ptr->next)

			if (ptr == finish->next)
				return (finish->next);
	}

	return (NULL);
}

