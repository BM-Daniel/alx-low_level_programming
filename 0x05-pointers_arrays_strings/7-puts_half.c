#include "main.h"

/**
 * puts_half - Write a function that prints half of a string, followed
 * by a new line
 *
 * @str: Character variable
 */

void puts_half(char *str)
{
	int count = 0;
	int mid_count;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count % 2 == 0)
	{
		mid_count = count / 2;
	}
	else
	{
		mid_count = (count - 1) / 2;
	}

	for (count = mid_count; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}

	_putchar('\n');
}
