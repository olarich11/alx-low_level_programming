#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end
 * of a dlistint_t list
 *
 * @head: Pointer to the head of the list
 * @n: The value of the element to be added
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_elem;
	dlistint_t *current;

	new_elem = malloc(sizeof(dlistint_t));

	if (new_elem == NULL)
		return (NULL);

	new_elem->n = n;
	new_elem->next = NULL;

	if (*head == NULL)
	{
		*head = new_elem;
		new_elem->prev = NULL;
		return (new_elem);
	}

	current = *head;

	while (current->next != NULL)
		current = current->next;

	current->next = new_elem;
	new_elem->prev = current;

	return (new_elem);
}

