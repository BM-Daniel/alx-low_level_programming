#include "main.h"

/**
 * print_last_digit - Prints the last digit of an integer
 * @number: Variable to store integer
 *
 * Return: Always send back the last digit
 */

int print_last_digit(int number)
{
	int last_digit = number % 10;

	return (_putchar('0' + last_digit));
}
