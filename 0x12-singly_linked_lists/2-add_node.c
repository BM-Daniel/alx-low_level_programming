#include "lists.h"

/**
 * add_node - Write a function that adds a new node at the beginning of a
 * list_t list.
 * @head:
 * @str:
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	size_t count = 0;
	char *str_dup;


	str_dup = strdup(str);
	if (str_dup == NULL)
		return (NULL);

	while (str[count])
		count++


	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = str_dup;
	node->len = count;
	node->next = *head;
	*head = node;

	return (node);

}
