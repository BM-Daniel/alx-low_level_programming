#include "lists.h"

/**
 * free_dlistint - Write a function that frees a dlistint_t list.
 * @head: Pointer to doubly linked lists
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
