#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of an array of
 * integers, followed by a new line
 *
 * @a: Integer 1
 * @n: Integer 2
 */

void print_array(int *a, int n)
{
	int i = 0;

	if (n <= 0)
	{
		return;
	}

	while (i < n)
	{
		if (i != n - 1)
		{
			printf("%d, ", a[i]);
		}
		else
		{
			printf("%d\n", a[i]);
		}
		i++;
	}
}
