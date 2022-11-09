#include "main.h"
#include <stdlib.h>

/**
 * create_array - Write a function that creates an array of chars, and
 * initializes it with a specific char
 *
 * @size: Size of array
 * @c: Character variable
 *
 * Return: Exit with allocated array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *memory;

	if (size == 0)
	{
		return (NULL);
	}

	memory = malloc(size * sizeof(c));

	if (memory == NULL)
	{
		return (NULL);
	}
	else
	{
		while (i < size)
		{
			*(memory + i) = c;
			i++;
		}
	}

	return (memory);
}
