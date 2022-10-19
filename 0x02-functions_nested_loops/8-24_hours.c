#include "main.h"

/**
 * jack_bauer - Write a function that prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59
 *
 */

void jack_bauer(void)
{
	int number1 = 0;
	int number2 = 0;
	int number3 = 0;
	int number4 = 0;

	int number2_limit;

	while (number1 <= 2)
	{
		number2 = 0;

		if (number1 == 2)
		{
			number2_limit = 3;
		}
		else
		{
			number2_limit = 9;
		}

		while (number2 <= number2_limit)
		{
			for (number3 = 0; number3 <= 5; number3++)
			{
				for (number4 = 0; number4 <= 9; number4++)
				{
					_putchar('0' + number1);
					_putchar('0' + number2);
					_putchar(':');
					_putchar('0' + number3);
					_putchar('0' + number4);
					_putchar('\n');
				}
			}
			number2++;
		}

		number1++;
	}
}
