#include <stdio.h>

/**
 * main - entry point to programme
 *
 * Description: Write a program that prints all possible combinations of
 * single-digit numbers
 *
 * Return: Always exit with code 0
 */

int main(void)
{
	int ascii_zero = 48;

	while (ascii_zero < 58)
	{
		putchar(ascii_zero);

		if (ascii_zero == 57)
		{
			break;
		}

		putchar(',');
		putchar(' ');

		ascii_zero++;
	}

	putchar('\n');

	return (0);
}
