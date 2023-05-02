#include "lists.h"
#include <stdlib.h>

/**
 * print_listint_safe- Function that prints a listint_t linked list.
 * @head: Pointer that point to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t plus = 0;

	const listint_t *slow = head, *fast = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

		printf("[%p] %i\n", (void *)slow, slow->n);
		plus++;

		if (slow == fast)
		{
			printf("[%p] %i\n", (void *)slow, slow->n);
			plus++;

			head = head->next;

			while (head != slow)
			{
				printf("[%p] %i\n", (void *)head, head->n);
				plus++;
				head = head->next;
			}

			exit(98);
		}
	}

	while (head != NULL)
	{
		printf("[%p] %i\n", (void *)head, head->n);
		plus++;
		head = head->next;
	}

	return (plus);
}
