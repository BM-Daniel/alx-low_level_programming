#include "main.h"

/**
 * _atoi - Write a function that convert a string to an integer
 *
 * @s: String variable to be converted to integer
 *
 * Return: Exit with integer
 */

int _atoi(char *s)
{
	int value = 1;
	unsigned int number = 0;

	while (*s)
	{
		if (*s == '-')
		{
			value = -value;
		}
		else if (*s >= '0' && *s <= '9')
		{
			number = (number * 10) + (*s - '0');
		}
		else if (number > 0)
		{
			break;
		}

		s++;
	}

	return (value * number);
}
