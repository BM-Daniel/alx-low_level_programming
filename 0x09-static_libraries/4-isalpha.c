#include "main.h"

/**
 * _isalpha- Write a function that checks alphabetic character
 *@c: This parameter takes in a value and converts it to an integer
 *
 * Return: If it returns 1 then it is an alphabet otherwise a 0
 */

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
