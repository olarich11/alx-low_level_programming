#include "lists.h"

/**
 * free_dlistint - Frees some dlistint_t list.
 * @head: Pointer to the head of the doublylist
 * Return: None
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		dlistint_t *temp = head;

		head = head->next;
		free(temp);
	}

	free(head);
}
