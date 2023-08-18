#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 *
 * @h: The pointer head of the list
 * @idx: Index of the new node
 * @n: The alue of the new node
 * Return: The address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;
	
	dlistint_t *iterator;

	unsigned int i;

	new_node = NULL;

	if (idx == 0)
	{
		new_node = add_dnodeint(h, n);
	}
	
	else
	{
		iterator = *h;
		i = 1;

		if (iterator != NULL)
			while (iterator->prev != NULL)
				iterator = iterator->prev;
	}

	while (iterator != NULL)
	{
		if (i == idx)
		{
			if (iterator->next == NULL)
			{
				new_node = add_dnodeint_end(h, n);
			}

			else
			{
				new_node = malloc(sizeof(dlistint_t));
	
				if (new_node != NULL)
				{
					new_node->n = n;
					new_node->next = iterator->next;
                        new_node->prev = iterator;
                        iterator->next->prev = new_node;
                        iterator->next = new_node;
                    }
                }
                break;
            }
            iterator = iterator->next;
            i++;
        }
	return (new_node);
}

