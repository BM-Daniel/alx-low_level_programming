#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Write a function that searches a string for any of a set of bytes
 *
 * @s: Main string to check matching on
 * @accept: Sub string with options to match with
 *
 * Return: Exit with first location of correct string matching
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}

	return (NULL);
}
