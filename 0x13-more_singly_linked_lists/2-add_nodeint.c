#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint- Function that adds a new node at the
 * beginning of a listint_t list.
 * @head: The pointer of the first node on the list
 * @n: value insert in the new node
 *
 * Return: Pointer to the node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_entry;

	new_entry = malloc(sizeof(listint_t));

	if (!new_entry)

		return (NULL);

	new_entry->n = n;
	new_entry->next = *head;
	*head = new_entry;

	return (new_entry);
}

