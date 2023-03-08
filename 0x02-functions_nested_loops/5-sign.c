#include "main.h"

/**
 * print_sign - A function to print the sign of a number
 * @n: Parameter for integer value
 *
 * Return: If positive (+) exit with 1, exit with -1 if negative (-)
 * and exit with 0 if zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
