#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an
 * array of integers
 *
 * @a: Pointer to array
 * @n: Where n is the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int temp;
	int i = 0;

	while (i < (n / 2))
	{
		temp = a[i];
		*(a + i) = *(a + (n - i - 1));
		*(a + (n - i - 1)) = temp;

		i++;
	}
}
