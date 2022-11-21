#include "function_pointers.h"

/**
 * int_index - Write a function that searches for an integer
 *
 * @array: contains elements to be used
 * @size: is the number of elements in the array array
 * @cmp: is a pointer to the function to be used to compare values
 *
 * Return: Returns the index of the first element for which the cmp
 * function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return;


	while (i < size)
	{
		if ((*cmp)(array[i]) == 1)
			return (i);
		i++;
	}

	return (0);
}
