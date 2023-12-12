#include <stdlib.h>
#include "../search_algos.h"

/**
 * free_skiplist - Frees the memory of a singly linked list.
 *
 * @list: Refers to memory address of the linked list that needs to be freed.
 */
void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
