#include "lists.h"

/**
 * delete_nodeint_at_index- Function that deletes the node at
 * index index of a listint_t linked list
 * @head: The pointer to the first element in the list
 * @index: Index of the node that should be deleted.
 * Index starts at 0
 *
 * Return: 1 or -1, while 1 for Success and -1 for not Succesful
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int j = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (j < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		j++;
	}


	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
