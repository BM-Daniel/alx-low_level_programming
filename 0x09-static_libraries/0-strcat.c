#include "main.h"

/**
 * _strcat - Write a function that concatenates two strings
 *
 * @dest: Variable where concatenation occurs
 * @src: Value will be added to dest
 *
 * Return: Exit with concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}

	return (dest);
}
