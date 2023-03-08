#include "main.h"

/**
 * print_alphabet_x10 - Print lowercase letters 10 times
 */

void print_alphabet_x10(void)
{
	char ascii_start = 97;
	char ascii_end = 122;
	int i = 0;

	while (i < 10)
	{
		for (ascii_start = 97; ascii_start <= ascii_end; ascii_start++)
		{
			_putchar(ascii_start);
		}

		_putchar('\n');

		i++;
	}
}
