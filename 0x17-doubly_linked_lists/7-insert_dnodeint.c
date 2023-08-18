#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: The pointer head of the list
 * @idx: Index of the new node
 * @n: The alue of the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}

	dlistint_t *iterator = *h;
	unsigned int i = 1;


	while (iterator != NULL && i < idx)
	{
		iterator = iterator->next;
		i++;
	}

	if (iterator == NULL && i < idx)
	{
		return (NULL);
	}

	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (iterator->next == NULL)
	{
		new_node->next = NULL;
		new_node->prev = iterator;
		iterator->next = new_node;
	}
	else
	{
		new_node->next = iterator->next;
		new_node->prev = iterator;
		iterator->next->prev = new_node;
		iterator->next = new_node;
	}

	return (new_node);
}
