#include "main.h"

/**
 * _memcpy - Write a function that copies memory area
 *
 * @dest: Memory area to be copied to
 * @src: Memory area to be copied from
 * @n Number of bytes to copy:
 *
 * Return: Exit with dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
