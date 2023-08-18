#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: The pointer head of the list
 * @idx: Index of the new node
 * @n: The value of the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *iterator;
	unsigned int i;
	dlistint_t *new_node;

	if (idx == 0)
		return (add_dnodeint(h, n));

	iterator = *h;
	i = 0;
	while (iterator && i < idx - 1)
	{
		iterator = iterator->next;
		i++;
		if (!iterator)
			return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;

	if (!iterator->next)
	{
		new_node->prev = iterator;
		new_node->next = NULL;
		iterator->next = new_node;
	}
	else
	{
		new_node->prev = iterator;
		new_node->next = iterator->next;
		iterator->next->prev = new_node;
		iterator->next = new_node;
	}

	return (new_node);
}
