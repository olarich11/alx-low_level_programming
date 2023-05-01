#include "lists.h"

/**
 * sum_listint- Function that returns the sum of all the
 * data (n) of a listint_t linked list.
 * @head: The first node of the list
 *
 * Return: Int
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *headsum = head;

	while (headsum)
	{
		add += headsum->n;
		headsum = headsum->next;
	}

	return (add);
}

