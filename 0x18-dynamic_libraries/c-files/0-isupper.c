#include "main.h"

/**
 * _isupper - Write a function that checks for uppercase character
 * @c: Variable to store character
 *
 * Return: Code 1 if uppercase and 0 if otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
