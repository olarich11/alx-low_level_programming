#include "lists.h"

/**
 * get_nodeint_at_index- Function that returns the nth
 * node of a listint_t linked list.
 * @head: The first node in the linked list
 * @index: Index of the node, starting at 0
 *
 * Return: Node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;

	if (head == NULL)
		return (NULL);
	for (x = 0; x < index; ++x)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}


