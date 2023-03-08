#include "main.h"

/**
 * _strlen_recursion - Write a function that returns the length of a string
 *
 * @s: String to count
 *
 * Return: Exit with length of string
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length = 1;
		length += _strlen_recursion(s + 1);
	}

	return (length);
}
