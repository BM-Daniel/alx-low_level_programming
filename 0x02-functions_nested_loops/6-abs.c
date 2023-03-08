#include "main.h"

/**
 * _abs - A function to find the absolute value of an integer
 * @number: Parameter to accept integer value
 *
 * Return: Send back the absolute value
 */

int _abs(int number)
{
	int absolute;

	if (number < 0)
	{
		absolute = -number;
	}
	else
	{
		absolute = number;
	}

	return (absolute);
}
