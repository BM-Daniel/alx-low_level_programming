#include "main.h"

/**
 * times_table - Write a function that prints the 9 times table,
 * starting with 0
 */

void times_table(void)
{
	int i;
	int j;
	int result, left_digit, right_digit;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			result = i * j;
			left_digit = result / 10;
			right_digit = result % 10;

			if (j == 0)
			{
				_putchar('0');
			}
			else if (result <= 9)
			{
				_putchar(' ');
				_putchar('0' + right_digit);
			}
			else
			{
				_putchar('0' + left_digit);
				_putchar('0' + right_digit);
			}

			if (j == 9)
			{
				break;
			}

			_putchar(',');
			_putchar(' ');
		}

		_putchar('\n');
	}
}
