#include "lists.h"
#include <stdlib.h>

/**
 * free_listint- Function that frees a listint_t list.
 *
 * @head: Pointer to head list to be freed
 *
 * Return: void should be in Success
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head == NULL)

	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
