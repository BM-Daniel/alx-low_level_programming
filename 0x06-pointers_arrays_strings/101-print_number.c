#include "main.h"

/**
 * print_number - Write a function that prints an integer
 *
 * @n: Integer variable
 */

void print_number(int n)
{
	char negative = '-';

	if (n < 0)
	{
		_putchar(negative);
		n = -n;
	}
	else if (n == 0)
	{
		_putchar('0');
		return;
	}



	if ((n / 10) > 0)
	{
		print_number(n / 10);
	}

	_putchar('0' + (n % 10));

}
