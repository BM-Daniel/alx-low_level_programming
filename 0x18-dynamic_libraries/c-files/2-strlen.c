#include "main.h"

/**
 * _strlen - Write a function that returns the length of a string
 *
 * @s: Character variable
 *
 * Return: Exit with count variable
 */

int _strlen(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}
	return (count);
}
