#include "main.h"

/**
 * _strspn - Write a function that gets the length of a prefix substring
 *
 * @s: Main string to do matching with other sub string / collection
 * @accept: Sub collection to do matching from
 *
 * Return: Exit with position of first character mismatch froom sub collection
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int position = -1;
	int verify;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				position++;
				verify = 1;
				break;
			}
			else
			{
				verify = 0;
			}
		}

		if (verify == 0)
		{
			return (position + 1);
		}
	}

	return (position + 1);
}
