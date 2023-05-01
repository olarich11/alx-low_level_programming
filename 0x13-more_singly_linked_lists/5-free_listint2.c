#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2- Function that frees a listint_t list.
 * @head: Pointer listint_t list to be freed
 *
 * Return: integer
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}


	*head = NULL;
}

