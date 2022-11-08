#include <stdio.h>

/**
 * main - Entry point to program
 *
 * Description: Write a program that prints all possible different
 * combinations of two digits.
 *
 * Return: Always 0 for SUCCESS
 */

int main(void)
{
	int left_digit = 0;
	int right_digit = 0;

	while (left_digit <= 8)
	{
		right_digit = left_digit + 1;

		while (right_digit <= 9)
		{
			putchar(left_digit + '0');
			putchar(right_digit + '0');

			if (left_digit == 8 && right_digit == 9)
			{
				break;
			}

			putchar(',');
			putchar(' ');

			right_digit++;
		}

		left_digit++;
	}

	putchar('\n');

	return (0);
}
