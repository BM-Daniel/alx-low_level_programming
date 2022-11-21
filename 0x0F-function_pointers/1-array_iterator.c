#include "function_pointers.h"

/**
 * array_iterator - Write a function that executes a function given as a
 * parameter on each element of an array
 *
 * @array: Array variable containing elements
 * @size: Size of the array
 * @action: Function pointer to function to be called
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}

}
