#include "lists.h"
/**
 * sum_listint - Write a function that returns the sum of all the data (n) of
 * a listint_t linked list
 *
 * @head: Pointer to head of the list
 *
 * Return: if the list is empty, return 0
*/

int sum_listint(listint_t *head)
{
	int result = 0;

	while (head)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
