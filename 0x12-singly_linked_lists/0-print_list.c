#include "lists.h"

/**
 * print_list - Write a function that prints all the elements of a list_t list
 * @h: Pointer to linnked list
 *
 * Return: Number of nodes. If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}
