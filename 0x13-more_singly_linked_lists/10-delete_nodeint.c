#include "lists.h"

/**
 * delete_nodeint_at_index - Write a function that deletes the node at index
 * index of a listint_t linked list
 *
 * @head: Pointer to head of the list
 * @index: the index of the node that should be deleted. Index starts at 0
 *
 * Return: Returns: 1 if it succeeded, -1 if it failed
*/

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node;
	listint_t *temp_node;
	unsigned int i = 0;

	node = *head;
	if (node == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(node);
		return (1);
	}

	while (i < (index - 1))
	{
		if (node->next == NULL)
			return (-1);

		node = node->next;
		i++;
	}

	temp_node = node->next;
	node->next = temp_node->next;
	free(temp_node);

	return (1);
}
