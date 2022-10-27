#include "main.h"

/**
 * _strncpy - Write a function that copies a string
 *
 * @dest: String will be copied into variable
 * @src: Source of string
 * @n: Number of characters to copy
 *
 * Return: Exit with dest variable
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}

	if (src[i] == '\0')
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
