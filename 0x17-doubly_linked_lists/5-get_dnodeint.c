#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: Head of the list
 * @index: Index of the node to search for, starting from 0
 * Return: Nth node or NULL if not found
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int current_index = 0;
	dlistint_t *current_node = head;

	while (current_node != NULL)
	{
		if (current_index == index)
			return (current_node);

		current_node = current_node->next;
		current_index++;
	}
	return (NULL);
}
