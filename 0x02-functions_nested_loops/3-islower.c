#include "main.h"

/**
 * _islower - Write a function that checks for lowercase character
 *@c: This parameter takes in a value and converts it to an integer
 *
 * Return: If it returns 1 then it is lowercase otherwise a 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
