#include "search_algos.h"

/**
 * linear_search - Write a function that searches for a value in an array of
 * integers using the Linear search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: Your function must return the first index where value is located
 * If value is not present in array or if array is NULL, your function must
 * return -1
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%li] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
	}

	return (-1);
}
