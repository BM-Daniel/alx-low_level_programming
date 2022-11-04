#include "main.h"

/**
 * _strcpy - Write a function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to
 * by dest
 *
 * @dest: Variable to copy string into
 * @src: Variable with source string
 *
 * Return: Exit with pointer with copied string
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
