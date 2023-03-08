#include "lists.h"

/**
 * insert_dnodeint_at_index - Write a function that inserts a new node at a
 * given position.
 * @h: Pointer to doubly linked list
 * @idx: index of the list where the new node should be added. Index starts
 * at 0
 * @n: Integer to be added at index
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx, do not add the
 * new node and return NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node, *new_node;

	node = *h;
	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx > 1)
	{
		node = node->next;
		if (node == NULL)
			return (NULL);

		idx--;
	}

	if (node->next == NULL)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = node;
	new_node->next = node->next;

	node->next->prev = new_node;
	node->next = new_node;

	return (new_node);
}
