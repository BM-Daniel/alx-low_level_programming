#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Write a function that prints the sum of the two
 * diagonals of a square matrix of integers
 *
 * @a: Pointer to matrix
 * @size: Size of 2x2 square  matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int left_diag = 0;
/*	int right_diag = 0;*/

	for (i = 0; i < size; i += 4)
	{
		left_diag += a[i + j];
		j++;
	}

	printf("%d\n", left_diag);
}
