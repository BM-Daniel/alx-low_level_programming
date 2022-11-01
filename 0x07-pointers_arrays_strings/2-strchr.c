#include "main.h"
#include <stddef.h>

/**
 * _strchr - Write a function that locates a character in a string
 *
 * @s: Pointer to string
 * @c: Searching character
 *
 * Return: Exit with first occurrence of character
 */

char *_strchr(char *s, char c)
{
	int location = 0;

	while ((s[location] != c) && (s[location] != '\0'))
	{
		location++;
	}

	if (s[location] == c)
	{
		return (s + location);
	}
	else
	{
		return (NULL);
	}
}
