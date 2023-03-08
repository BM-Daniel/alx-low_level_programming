#include "main.h"

/**
 * print_result - Function to prrint out result to stdout
 *
 * @result: Value after multiplying
 * @j: Current iteration value
 */

void print_result(int result, int j);

/**
 * print_times_table - main entry for this file
 *
 * @n: Value needed to find its multiples
 *
 * Description: Write a function that prints the n times table,
 * starting with 0
 */

void print_times_table(int n)
{
	int i;
	int j;
	int total;

	if (n >= 0 && n <= 15)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				total = i * j;

				print_result(total, j);

				if (j < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}


/**
 * print_result - Function to print out result to stdout
 *
 * @result: Value after multiplying
 * @j: Current loop iteration value
 */

void print_result(int result, int j)
{
	int left_digit, middle_digit, right_digit;

	left_digit = result / 100;
	middle_digit = (result % 100) / 10;
	right_digit = result % 10;

	if (j == 0)
	{
		_putchar('0');
	}
	else if (result <= 9)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar('0' + right_digit);
	}
	else if (result < 100)
	{
		_putchar(' ');
		_putchar('0' + middle_digit);
		_putchar('0' + right_digit);
	}
	else
	{
		_putchar('0' + left_digit);
		_putchar('0' + middle_digit);
		_putchar('0' + right_digit);
	}
}
