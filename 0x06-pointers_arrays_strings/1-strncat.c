#include "main.h"
#include <stdio.h>

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
	int dest_size = 98;

	while (dest[i] != '\0')
	{
		i++;
	}

	if (n > (dest_size - i))
	{
		n = dest_size - i;
	}

	while (j < n)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
