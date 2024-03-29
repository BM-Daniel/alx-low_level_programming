#include "lists.h"

/**
 * print_listint - Write a function that prints all the elements of a
 * listint_t list
 *
 * @h: Pointer to the head of the list
 * Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (node);

}
