#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - Write a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter
 *
 * @str: String to be duplicated
 *
 * Return: Exit with duplicate
 */

char *_strdup(char *str)
{
	int i = 0;
	int j = 0;
	int count = 0;
	char *duplicate;


	if (str == NULL)
	{
		return (NULL);
	}

	while (str[i] != '\0')
	{
		count++;
		i++;
	}

	duplicate = malloc(count * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	while (j < count)
	{
		duplicate[j] = str[j];
		j++;
	}


	return (duplicate);
}
