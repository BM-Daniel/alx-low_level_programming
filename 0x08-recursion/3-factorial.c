#include "main.h"

/**
 * factorial - Write a function that returns the factorial of a given number
 *
 * @n: Integer variable
 *
 * Return: Exit with n!
 */

int factorial(int n)
{
	int multiply = n;

	if (n == 0 || n == 1)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}

	multiply *= factorial(n - 1);

	return (multiply);
}
