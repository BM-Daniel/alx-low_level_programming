#include "lists.h"

/**
 * dlistint_len - Write a function that returns the number of elements
 * in a linked dlistint_t list.
 * @h: Pointer to linked lists
 *
 * Return: Exit with number of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
