#include "lists.h"

/**
 * free_listint2 - Write a function that frees a listint_t list
 * The function sets the head to NULL
 * 
 * @head: Pointer to head of the list
*/

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	else
	{
		while (*head)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
		}
	}

	head = NULL;
}
