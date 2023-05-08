#include "lists.h"

/**
 * listint_len - Write a function that returns the number of elements in
 * a linked listint_t list
 *
 * @h: Pointer to head of list
 * Return: Number of nodes
*/

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
