#include "lists.h"

/**
 * print_dlistint - Write a function that prints all the elements of a
 * dlistint_t list.
 * @h: Pointer to linked lists
 *
 * Return: Exit with number of nodes in lists
 */

size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;

	while (h != NULL)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
