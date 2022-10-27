#include "main.h"

/**
 * _strncat - Write a function that concatenates two strings
 *
 * @dest: Concatenated string variable
 * @src: Variable 2
 * @n: number of bytes
 *
 * Return: Exit with dest variable
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		*(dest + i) = src[j];
		i++;
		j++;
	}

	return (dest);
}
