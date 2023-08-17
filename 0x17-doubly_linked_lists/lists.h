/**
 * struct dlistint_s - The doubly linked list node structure.
 * @n: integer.
 * @prev: The points to the previous node.
 * @next: The points to the next node.
 *
 * Description: This structure defines a node in a doubly linked list.
 * It contains an integer value (@n) and two pointers (@prev and @next)
 * that point to the previous and next nodes in the list, respectively.
 * This structure is used for the Holberton project.
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

#endif

