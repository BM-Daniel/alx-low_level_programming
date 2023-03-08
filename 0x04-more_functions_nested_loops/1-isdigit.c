#include "main.h"

/**
 * _isdigit - Write a function that checks for a digit (0 through 9)
 *
 * @c: Variable to hold character
 *
 * Return: Exit with 1 if a digit else 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
