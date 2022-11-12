#include "main.h"
#include <stdlib.h>


/**
 * length - Calculate length of string
 * @str: String
 *
 * Return: Exit with length
 */

unsigned int length(char *str);

unsigned int length(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
		;

	return (i);
}


/**
 * string_nconcat - Write a function that concatenates two strings
 *
 * @s1: String 1
 * @s2: String 2
 * @n: Number of bytes to take from s2
 *
 * Return: Exit with memory address
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int i = 0;
	int j, size = n;
	int total, s1_length, s2_length;


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

	if (size >= s2_length)
	{
		size = s2_length;
	}

	total = s1_length + size + 1;
	concat = malloc(sizeof(*concat) * total);

	if (concat == NULL)
	{
		return (NULL);
	}


	i = 0;
	while (s1_length)
	{
		concat[i] = s1[i];
		i++;
		s1_length--;
	}

	j = 0;
	while (size)
	{
		concat[i] = s2[j];
		size--;
		i++;
		j++;
	}

	concat[total - 1] = '\0';

	return (concat);
}
