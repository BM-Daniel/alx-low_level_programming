#include "lists.h"

/**
 * sum_dlistint - Write a function that returns the sum of all the data (n) of
 * a dlistint_t linked list.
 * @head: Pointer to doubly linked lists
 *
 * Return: Exit with the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
