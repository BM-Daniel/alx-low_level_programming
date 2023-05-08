#include "lists.h"

/**
 * pop_listint - Write a function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 *
 * @head: Pointer to head of the list
 * Return: if the linked list is empty return 0
*/

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int head_value;

	if (*head == NULL)
		return (0);

	temp = *head;
	head_value = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (head_value);
}
