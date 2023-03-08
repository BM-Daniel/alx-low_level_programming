#include "main.h"

/**
 * string_toupper - Write a function that changes all lowercase letters
 * of a string to uppercase
 *
 * @str: Pointer variable
 *
 * Return: Exit with lowercase values
 *
 */

char *string_toupper(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			j = -(97 - str[i]);

			*(str + i) = 'A' + j;
		}
	}

	return (str);
}
