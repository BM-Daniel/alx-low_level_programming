#include "main.h"

/**
 * print_alphabet - Print lowercase letters
 */

void print_alphabet(void)
{
	char ascii_start = 97;
	char ascii_end = 122;

	for (ascii_start = 97; ascii_start <= ascii_end; ascii_start++)
	{
		_putchar(ascii_start);
	}

	_putchar('\n');
}
