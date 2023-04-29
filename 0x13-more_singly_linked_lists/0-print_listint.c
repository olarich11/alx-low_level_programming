#include "lists.h"

/**
 * print_listint- Function that prints all the
 * elements of a listint_t list.
 * @h: List of type listint_t to print
 *
 * Return: nos of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cod = 0;

	while (h)
	{
		printf("%d\n", h->n);
		cod++;
		h = h->next;
	}
	return (cod);
}
