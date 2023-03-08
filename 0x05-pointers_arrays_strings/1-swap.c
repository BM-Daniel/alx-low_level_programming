#include "main.h"
#include <stdio.h>

/**
 * swap_int - Write a function that swaps the values of two integers
 *
 * @a: First integer
 * @b: Second integer
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
