#include "lists.h"

/**
 * delete_dnodeint_at_index - Write a function that deletes the node at index
 * index of a dlistint_t linked list.
 * @head: Pointer to doubly linked list
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node;

	node = *head;
	if (*head == NULL)
		return (-1);

	while (index > 0)
	{
		if (node == NULL)
			return (-1);
		node = node->next;
	}

	if (node == *head)
	{
		*head = node->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else
	{
		node->prev->next = node->next;
		if (node->next != NULL)
			node->next->prev = node->prev;
	}
	free(node);

	return (1);
}
