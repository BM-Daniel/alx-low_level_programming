#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string
 *
 * @str: Pointer variable
 *
 * Return: Exit with capitalised string
 */

char *cap_string(char *str)
{
	int i = 0;
	int j;
	char separators[] = " \t\n,;.!?\"(){}";

	while (str[i])
	{
		for (j = 0; separators[j] != '\0'; j++)
		{
			if (str[i] == separators[j])
			{
				if (str[i + 1] >= 97 && str[i + 1] <= 122)
				{
					str[i + 1] = str[i + 1] - 32;
				}
			}
		}

		i++;
	}

	return (str);
}
