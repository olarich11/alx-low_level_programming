#include "lists.h"

/**
 * listint_len- Function that returns the number of
 * elements in a linked listint_t list.
 *
 * @h: List of type
 *
 * Return: integer
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *mouse = mouse;
	unsigned int cod = 0;

	mouse = h;
	while (mouse)
	{
		cod++;
		mouse = mouse->next;
	}
	return (cod);
}

