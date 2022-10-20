#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints the first 98 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line
 *
 * Return: Exit 0 as success
 */

int main(void)
{
	long unsigned int i, c;
	long unsigned int a = 1;
	long unsigned int b = 2;

	printf("%lu, ", a);
	printf("%lu, ", b);

	for (i = 3; i <= 98; i++)
	{
		c = a + b;
		if (i == 98)
		{
			printf("%lu", c);
			continue;
		}

		printf("%lu, ", c);

		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
