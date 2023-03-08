#include "lists.h"

/**
 * list_len - Write a function that returns the number of elements in a
 * linked list_t list.
 * @h: Pointer to linked list
 *
 * Return: Exit with number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);

}
