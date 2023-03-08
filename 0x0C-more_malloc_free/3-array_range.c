#include "main.h"
#include <stdlib.h>

/**
 * array_range - Write a function that creates an array of integers
 *
 * @min: Minimum integer to start with
 * @max: Maximum integer to end with
 *
 * Return: Exit with memory address
 */

int *array_range(int min, int max)
{
	int *memory;
	int total;
	int i = 0;

	total = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}

	memory = malloc(total * sizeof(*memory));

	if (memory == NULL)
	{
		return (NULL);
	}

	for (; min <= max; min++)
	{
		memory[i] = min;
		i++;
	}

	return (memory);

}
