#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal
 * @n: Number of times the character should be printed
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}

	_putchar('\n');
}
