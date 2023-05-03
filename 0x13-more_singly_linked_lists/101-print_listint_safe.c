#include <stdio.h>
#include "lists.h"

/**
 * _r- Re-allocated memory in an array pointed to the
 * nodes in a linked list
 * @list: Old(list) to be appended
 * @size: The sizes of the new list
 * @new: List to be added to the new node
 *
 * Return: The Pointer to the new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newpage;
	size_t k;

	newpage = malloc(size * sizeof(listint_t *));

	if (newpage == NULL)
	{
		free(list);
		exit(98);
	}

	for (k = 0; k < size - 1; k++)
		newpage[k] = list[k];
	newpage[k] = new;
	free(list);

	return (newpage);
}
/**
 * print_listint_safe- Function that prints a
 * listint_t linked list.
 * @head: The pointer to the start on the list
 *
 * Return: Number of nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t j, imei = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (j = 0; j < imei; j++)
		{
			if (head == list[j])
			{
			printf("-> [%p] %d\n", (void *)head, head->n);
			free(list);

			return (imei);
		}
	}
	imei++;
	list = _r(list, imei, head);
	printf("[%p] %d\n", (void *)head, head->n);
	head = head->next;
	}
	free(list);

	return (imei);
}
