#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_list - Frees the memory of a singly linked list.
 *
 * @list: Refers the memory address of the linked list that needs to be freed.
 */
void free_list(listint_t *list)
{
	listint_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_list(node);
	}
}
