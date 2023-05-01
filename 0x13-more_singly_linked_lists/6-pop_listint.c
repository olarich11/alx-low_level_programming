#include "lists.h"

/**
 * pop_listint- Function that deletes the head node of a
 * listint_t linked list, and returns the head node’s data (n).
 * @head: The first pointer element in the linked list
 *
 * Return: Data deleted inside the element, or 0 (Success) if
 * the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *remve;

	int num;

	if (!head || !*head)

		return (0);

	num = (*head)->n;

	remve = (*head)->next;

	free(*head);

	*head = remve;

	return (num);
}
