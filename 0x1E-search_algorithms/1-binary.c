#include "search_algos.h"

/**
 * binary_search - Write a function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 *
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: Your function must return the index where value is located
 * If value is not present in array or if array is NULL, your function
 * must return -1
*/

int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid_point, i;

	if (array == NULL)
		return (-1);


	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%li", i);

			if (i != right)
				printf(", ");
		}
		printf("\n");


		mid_point = (left + right) / 2;

		if (array[mid_point] < value)
			left = mid_point + 1;
		else if (array[mid_point] > value)
			right = mid_point - 1;
		else
			return (mid_point);
	}

	return (-1);
}
