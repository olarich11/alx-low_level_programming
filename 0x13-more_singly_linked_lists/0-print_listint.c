#include "lists.h"

/**
 * print_listint- Function that prints all the
 * elements of a listint_t list.
 * @h: List of type
 *
 * Return: nos of nodes
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t cod = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		cod += 1;
		cursor = cursor->next;
	}
	return (cod);
}
