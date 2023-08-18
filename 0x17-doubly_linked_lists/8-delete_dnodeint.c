#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given index
 * in a dlistint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node = *head;
	dlistint_t *previous_node = NULL;

	unsigned int count = 0;

	if (current_node == NULL)
		return (-1);

	while (current_node != NULL && count < index)
	{
		previous_node = current_node;
		current_node = current_node->next;
		count++;
	}

	if (current_node == NULL)
		return (-1);

	if (previous_node == NULL)
	{
		*head = current_node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		previous_node->next = current_node->next;
		if (current_node->next != NULL)
			current_node->next->prev = previous_node;
	}
	free(current_node);
	return (1);
}
