#include "main.h"

/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @code: String to be encoded
 *
 * Return: Exit with encoded string
 */

char *rot13(char *code)
{
	int i = 0;


	while (code[i])
	{
		while ((code[i] >= 97 && code[i] <= 122) ||
			(code[i] >= 65 && code[i] <= 90))
		{
			if ((code[i] >= 97 && code[i] <= 109) ||
				(code[i] >= 65 && code[i] <= 77))
			{
				code[i] += 13;
			}
			else
			{
				code[i] -= 13;
			}

			i++;
			continue;
		}

		i++;
	}

	return (code);
}
