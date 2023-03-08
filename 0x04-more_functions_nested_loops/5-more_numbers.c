#include "main.h"

/**
 * more_numbers - Write a function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line
 */

void more_numbers(void)
{
	int start;
	int end = 14;
	int left_digit, right_digit, i;

	for (i = 0; i < 10; i++)
	{
		for (start = 0; start <= end; start++)
		{
			left_digit = start / 10;
			right_digit = start % 10;

			if (start > 9)
			{
				_putchar('0' + left_digit);
			}

			_putchar('0' + right_digit);
		}

		_putchar('\n');
	}

}
