#include "main.h"
#include <stddef.h>

/**
 * _strstr - Write a function that locates a substring
 *
 * @haystack:
 * @needle:
 *
 * Return:
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (!*needle)
	{
		return (haystack);
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;
			while (haystack[i + j] == needle[j])
			{
				if (needle[j + 1] == '\0')
				{
					return (haystack + i);
				}

				j++;
			}

		}


	}
	return (NULL);
}
