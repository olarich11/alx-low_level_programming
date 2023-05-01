#include "lists.h"

/**
 * add_nodeint_end- Function that adds a new node at
 * the end of a listint_t list
 * @head: The pointer in the first element of the list
 * @n: value to be insert in the new element
 *
 * Return: What to be pointed to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_end;
	listint_t *temp = *head;

	new_end = malloc(sizeof(listint_t));
	if (!new_end)
		return (NULL);

	new_end->n = n;
	new_end->next = NULL;

	if (*head == NULL)
	{
		*head = new_end;
		return (new_end);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new_end;

	return (new_end);
}

