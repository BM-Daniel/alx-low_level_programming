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

	while (str[count] != '\0')
	{
		count++;
	}

	for (count /= 2; str[count] != '\0'; count++)
	{
		_putchar(str[count]);
	}

	_putchar('\n');
}
