#include "lists.h"

/**
 * add_dnodeint - Write a function that adds a new node at the beginning of a
 * dlistint_t list.
 * @head: Pointer to linked list
 * @n: Integer value for new node
 *
 * Return: Exit with list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (*head);
}
