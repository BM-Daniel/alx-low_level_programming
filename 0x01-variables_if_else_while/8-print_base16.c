#include <stdio.h>

/**
 * main - entry point to program
 *
 * Description: Write a program that prints all the numbers
 * of base 16 in lowercase, followed by a new line
 *
 * Return: Always exit with code 0
 */

int main(void)
{
	int hex_start_zero = 48;
	int hex_start_a = 97;

	while (hex_start_zero < 58)
	{
		putchar(hex_start_zero);
		hex_start_zero++;
	}

	while (hex_start_a <= 102)
	{
		putchar(hex_start_a);
		hex_start_a++;
	}

	putchar('\n');

	return (0);
}
