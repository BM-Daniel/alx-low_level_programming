#include "main.h"
#include <stdlib.h>


/**
 * length - Calculates the length of a string
 *
 * @str: String variable
 *
 * Return: Exit with length
 */

int length(char *str);

int length(char *str)
{
	int i = 0;

	while (str[i])
	{
		i++;
	}

	return (i);
}

/**
 * str_concat - Write a function that concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Exit with joined string
 */

char *str_concat(char *s1, char *s2)
{
	int s1_length, s2_length;
	char *joined;
	int i;


	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	s1_length = length(s1);
	s2_length = length(s2);

	joined = malloc((1 + s1_length + s2_length) * sizeof(char));

	if (joined == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < s1_length; i++)
	{
		joined[i] = s1[i];
	}


	for (i = 0; i < s2_length; i++)
	{
		joined[i + s1_length] = s2[i];
	}


	joined[s1_length + s2_length] = '\0';

	return (joined);
}
