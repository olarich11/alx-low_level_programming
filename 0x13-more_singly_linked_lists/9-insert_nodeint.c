#include "lists.h"

/**
 * insert_nodeint_at_index- Function that inserts a
 * new node at a given position.
 * @head: pointer to the first node in the list
 * @idx: Index of the list where the new node
 * should be added. Index starts at 0
 * @n: Insert data in the new node
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp = *head;
	unsigned int node;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = temp;

		*head = new;
		return (new);
	}
	for (node = 0; node < (idx - 1); node++)
	{
		if (temp == NULL || temp->next == NULL)
			return (NULL);
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;

	return (new);
}
