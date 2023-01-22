#include "lists.h"

/**
 * get_dnodeint_at_index - Write a function that returns the nth node of a
 * dlistint_t linked list.
 * @head: Pointer to doubly linked lists
 * @index: Value at index in node
 *
 * Return: if the node does not exist, return NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;

	node = head;

	while (index > 0)
	{
		node = node->next;
		index--;
	}

	return (node);
}
