#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte
 *
 * @s: Pointer to buffer already filled with 0x00
 * @b: Constant byte to fill out parts of the buffer
 * @n: Number of elemens in buffer to modify
 *
 * Return: Exit with pointer to buffer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
