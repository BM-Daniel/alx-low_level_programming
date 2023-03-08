#include "main.h"

/**
 * _pow_recursion - Write a function that returns the value of x raised
 * to the power of y
 *
 * @x: Base number
 * @y: Superscript numer
 *
 * Return: Exit with -1 if y < 0 else exit with result
 */

int _pow_recursion(int x, int y)
{
	int power = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}

	power *= _pow_recursion(x, y - 1);

	return (power);
}
