#include "lists.h"

/**
 * insert_nodeint_at_index - Write a function that inserts a new node at a
 * given position
 *
 * @head: Pointer to head of the list
 * @idx: the index of the list where the new node should be added.
 * Index starts at 0
 * @n: Integer number
 *
 * Return: the address of the new node, or NULL if it failed
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL
*/

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *temp_node;
	unsigned int node = 0;

	temp_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = temp_node;
		*head = new_node;

		return (new_node);
	}

	while (node < (idx - 1))
	{
		if ((temp_node == NULL) || (temp_node->next == NULL))
			return (NULL);

		temp_node = temp_node->next;
		node++;
	}

	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
