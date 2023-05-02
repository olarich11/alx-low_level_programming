#include "lists.h"

/**
 * reverse_listint- Function that reverses
 * a listint_t linked list
 * @head: The first pointer to the node in the list
 *
 * Return: The first pointer to the node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *m;
	listint_t *n;

	m = NULL;
	n = NULL;

	while (*head != NULL)
	{
		n = (*head)->next;

		(*head)->next = m;

		m = *head;
		*head = n;
	}

	*head = m;

	return (*head);
}
