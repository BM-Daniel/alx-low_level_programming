#include <stdio.h>

/**
 * main - Entry point to program
 *
 * Description: Write a program that prints all possible different
 * combinations of three digits.
 *
 * Return: Always 0 for SUCCESS
 */

int main(void)
{
	int first_two = 0;
	int last_two = 0;

	while (first_two < 100)
	{
		last_two = 0;

		while (last_two < 100)
		{
			if (last_two > first_two)
			{
				putchar((first_two / 10) + '0');
				putchar((first_two % 10) + '0');
				putchar(' ');
				putchar((last_two / 10) + '0');
				putchar((last_two % 10) + '0');

				if (first_two == 98 && last_two == 99)
				{
					break;
				}

				putchar(',');
				putchar(' ');
			}

			last_two++;
		}

		first_two++;

	}

	putchar('\n');

	return (0);
}
