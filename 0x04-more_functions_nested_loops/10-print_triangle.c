#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle, followed
 * by a new line
 *
 * @size: Where size is the size of the triangle
 */

void print_triangle(int size)
{
	int i, j, k;

	i = 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i <= size)
	{
		for (k = 1; k <= size - i; k++)
		{
			_putchar(' ');
		}

		for (j = 1; j <= i; j++)
		{
			_putchar('#');
		}

		_putchar('\n');
		i++;
	}
}
