#include <stdio.h>

/**
 * main - entry point
 *
 * Description: Write a program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2, followed by a new line
 *
 * Return: Exit 0 as success
 */

int main(void)
{
	long int i, c;
	long int a = 1;
	long int b = 2;

	printf("%ld, ", a);
	printf("%ld, ", b);

	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		if (i == 50)
		{
			printf("%ld", c);
			continue;
		}

		printf("%ld, ", c);

		a = b;
		b = c;
	}
	printf("\n");

	return (0);
}
