#include "lists.h"

/**
 * print_listint- Function that prints all the
 * elements of a listint_t list.
 * @h: List of type
 *
 * Return: integer
 */
size_t print_listint(const listint_t *h)
{
	const listint_t *mouse = mouse;
	unsigned int cod = 0;

	mouse = h;
	while (mouse)
	{
		cod++;
		printf("%d\n", mouse->n);
		mouse = mouse->next;
	}
	return (cod);
}
