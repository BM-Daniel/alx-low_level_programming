#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Write a function that allocates memory for an array, using malloc
 *
 * @nmemb: Number of elements
 * @size: Size of each element
 *
 * Return: Exit with memory address
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *memory;
	unsigned int i;
	unsigned int total;


	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	total = nmemb * size;

	memory = malloc(total);

	if (memory == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < total; i++)
	{
		memory[i] = 0;
	}

	return (memory);
}
