#include "main.h"

/**
 * rev_string - Write a function that reverses a string.
 *
 * @s: Character variable
 */

void rev_string(char *s)
{
	int count = 0;
	int i = 0;

	char temp;
	char *start = s;
	char *end = s;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}

	i = 0;
	while (i < count - 1)
	{
		end++;
		i++;
	}

	i = 0;
	while (i < count / 2)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
		i++;
	}

}
