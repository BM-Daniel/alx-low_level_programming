#include "lists.h"

/**
 * add_dnodeint_end - Write a function that adds a new node at the end of a
 * dlistint_t list.
 * @head: Pointer to linked list
 * @n: Integer number
 *
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *node;
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	node = *head;
	while (node->next != NULL)
		node = node->next;

	new_node->prev = node;
	node->next = new_node;

	return (new_node);
}
