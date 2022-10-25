#include "main.h"

/**
 * print_rev - Write a function that prints a string, in reverse,
 * followed by a new line
 *
 * @s: Character variable
 */

void print_rev(char *s)
{
	int count = 0;
	int i = 0;

	while (s[i] != '\0')
	{
		count += 1;
		i++;
	}

	i = count;
	while (i--)
	{
		_putchar(s[i]);

	}

	_putchar('\n');
}
