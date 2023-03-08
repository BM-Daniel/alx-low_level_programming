#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on the
 * terminal.
 *
 * @n: Where n is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int i = 1;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i <= n)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');

		i++;
	}

}
