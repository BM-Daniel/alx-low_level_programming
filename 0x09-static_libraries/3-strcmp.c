#include "main.h"

/**
 * count - A function to count the strings in each variable
 *
 * @ptr: Pointer variable to hold pointer address
 *
 * Return: Exit with count
 */

int count(char *ptr);


/**
 * _strcmp - Write a function that compares two strings
 *
 * @s1: String 1
 * @s2: String 2
 *
 * Return: Exit with a value < 0 if s1<s2, value > 0 if s1>s2 and
 * value = 0 if s1=s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}

		i++;
	}

	return (0);
}
